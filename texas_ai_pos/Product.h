#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>
#include "InventoryItems.h"
#include "InventoryAttributes.h"
#include <QVector>
#include <QtSql>
#include <QSqlQuery>
#include "ItemCard.h"
//#include "Widget.h"

class Product
{
public:
    Product();
    Product(InventoryItems, InventoryAttributes);
    ~Product();


    InventoryItems thisItem;
    InventoryAttributes thisAtt;

    static QVector<Product> cart;
    static QVector<InventoryItems> itemsVector;
    static QVector<InventoryAttributes> attsVector;
    static QVector<Product> DBProducts;
    static double total;
    int selected = 0;


    static QVector<Product> shirts;
    static QVector<Product> sweatShirts;
    static QVector<Product> caps;
    static QVector<Product> cups;
    static QVector<Product> stickers;
    static QVector<Product> misc;

    QVector<InventoryItems> getActiveItems(); //returns a vector containing all active item objects
    QVector<InventoryAttributes> getActiveAtts(); //returns a vector containing all active att objects

    void printCard();


    static void clearCart();
    void remFromCart();
    //static void printCart();
    static double getTotal();
    int getSelected();

    void incBtn();
    void decBtn();
    void addToCartBtn();
    static void makeShirtsVector();
    static void makeSweatShirtsVector();
    static void makeCapsVector();
    static void makeCupsVector();
    static void makeStickersVector();
    static void makeMiscVector();
    static void makeAllVectors();

    static void updateQuantity();

    static QVector<Product> makeProducts(QVector<InventoryItems> & II, QVector<InventoryAttributes> & IA);
    static void printDBProducts();






};

#endif // PRODUCT_H

#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>
#include "InventoryItems.h"
#include "InventoryAttributes.h"
#include <QVector>
#include <QSqlQuery>
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

    QVector<InventoryItems> getActiveItems(); //returns a vector containing all active item objects


    static void clearCart();
    void remFromCart();
    //static void printCart();
    static double getTotal();
    int getSelected();

    void incBtn();
    void decBtn();
    void addToCartBtn();

    static QVector<Product> makeProducts(QVector<InventoryItems> & II, QVector<InventoryAttributes> & IA);
    static void printDBProducts();






};

#endif // PRODUCT_H

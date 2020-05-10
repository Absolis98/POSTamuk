#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>
//#include "InventoryItems.h"
//#include "InventoryAttributes.h"
#include <QVector>
#include <QSqlQuery>
//#include "Widget.h"

class Product
{
public:
    //Product(InventoryItems, InventoryAttributes);
    Product(QString n, double p, Map<QString, int>



    int itemID;
    int attID;
    QString name;
    QString category;
    QString size;
    int quantityAv;
    double price;

    //InventoryItems thisItem;
    //InventoryAttributes thisAtt;

    //static QVector<Product> cart;
    //static QVector<InventoryItems> itemsVector;
    //static QVector<InventoryAttributes> attsVector;
    //static QVector<Product> DBProducts;

    //QVector<InventoryItems> getActiveItems(); //returns a vector containing all active item objects

    void setItemID();
    void setAttID();
    void setName();
    void setCategory();
    void setSize();
    void setQuantityAv();
    void setPrice();

    static QVector<Product> makeProducts(QVector<InventoryItems> &II, QVector<InventoryAttributes> &&IA);






};

#endif // PRODUCT_H

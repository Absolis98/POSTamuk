#include "Product.h"


QVector<Product> Product::cart;
QVector<Product> Product::DBProducts;
QVector<InventoryItems> Product::itemsVector;
QVector<InventoryAttributes> Product::attsVector;

Product::Product(InventoryItems iI, InventoryAttributes iA)
:thisItem(iI), thisAtt(iA)
{

}




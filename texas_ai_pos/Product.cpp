#include "Product.h"


QVector<Product> Product::cart;
QVector<Product> Product::DBProducts;
QVector<InventoryItems> Product::itemsVector;
QVector<InventoryAttributes> Product::attsVector;

QVector<Product> Product::shirts;
QVector<Product> Product::sweatShirts;
QVector<Product> Product::caps;
QVector<Product> Product::cups;
QVector<Product> Product::stickers;
QVector<Product> Product::misc;

double Product::total = 0.00;

Product::Product()
{

}

Product::Product(InventoryItems iI, InventoryAttributes iA)
:thisItem(iI), thisAtt(iA)
{

}

Product::~Product()
{
    //dtor
}

QVector<InventoryItems> Product::getActiveItems()
{
    int numItems = 0;
    QVector<InventoryItems> itemsVector;
    QSqlQuery qry;



    if(qry.exec("SELECT id, name, category, description, imageID FROM inventory_items WHERE active=1"))
    {
        while(qry.next())
        {
            numItems++;
            itemsVector.resize(numItems);

            int id;
            QString name;
            QString category;
            QString description;
            QString imageID;


            id = qry.value(0).toInt();
            name = qry.value(1).toString();
            category = qry.value(2).toString();
            description = qry.value(3).toString();
            //imageID = qry.value(0).toString();

            itemsVector[numItems - 1].setID(id);
            itemsVector[numItems - 1].setName(name);
            itemsVector[numItems - 1].setCategory(category);
            itemsVector[numItems - 1].setDescription(description);
         }
    }
    //qDebug() << itemsVector;

    return itemsVector;
}

QVector<InventoryAttributes> Product::getActiveAtts()
{
    int numAttributes = 0;
    QVector<InventoryAttributes> attsVector;
    QSqlQuery qry;



    if(qry.exec("Select attributeID, itemID, attribute, quantity, price FROM inventory_attributes;"))
    {
        while(qry.next())
        {
            numAttributes++;
            attsVector.resize(numAttributes);

            int attID;
            int itemID;
            QString attribute;
            int quantity;
            double price;


            attID = qry.value(0).toInt();
            itemID = qry.value(1).toInt();
            attribute = qry.value(2).toString();
            quantity = qry.value(3).toInt();
            price = qry.value(4).toDouble();

            attsVector[numAttributes - 1].setAttID(attID);
            attsVector[numAttributes - 1].setID(itemID);
            attsVector[numAttributes - 1].setAttribute(attribute);
            attsVector[numAttributes - 1].setQuantity(quantity);
            attsVector[numAttributes - 1].setPrice(price);
         }
    }
    //qDebug() << itemsVector;

    return attsVector;
}

void Product::addToCartBtn()
{
    for (int i = 0; i < selected; i++)
        cart.push_back(*this);

    qDebug() << cart[0].thisItem.getName();
    //this may need to be moved into the for loop, depending on design
    //keeping it outside is more efficient
    //(*this).thisAtt.setQuantity((*this).thisAtt.getQuantity() - selected);

}

void Product::remFromCart()
{
    //this method needs more work. The intention is to delete a specific object,
    //but the line below will always get rid of cart[1]
    cart.erase(cart.begin() + 1);
}

void Product::clearCart()
{
    cart.clear();
}

double Product::getTotal()
{
    total = 0;
    for (int i = 0; i < cart.size(); i++) {

        total += cart[i].thisAtt.getPrice();
    }
    return total;
}

int Product::getSelected()
{
    return selected;
}

void Product::incBtn()
{
    if (selected <= (*this).thisAtt.getQuantity()) selected++;
}

void Product::decBtn()
{
    if (selected > 0) selected--;
}




//will take in money given
//maybe override method two have cash and card option. or include logic within
void finalPurchaseBtn()
{



    //will change values inside the database with local values
    //will initialize statistical data
}


//functions using DBAPI data

QVector<Product> Product::makeProducts(QVector<InventoryItems> & II, QVector<InventoryAttributes> & IA)
{
    //Product x(II[0], IA[0]);
    //DBProducts.push_back(x);

    int j = 0;
    for (int i = 0; i < II.size(); i++) {
        for (; j < IA.size(); j++) {
            if (II[i].getID() == IA[j].getID()) {
                Product x(II[i], IA[j]);
                DBProducts.push_back(x);
            }
            else break;
        }
    }

        return DBProducts;
}

void Product::printCard()
{
    qDebug() << "name: " << (*this).thisItem.getName() << endl;
    qDebug() << "size: " << (*this).thisAtt.getAttribute() << endl;
    qDebug() << "description: " << (*this).thisItem.getDescription() << endl;
    qDebug() << "price: $" << (*this).thisAtt.getPrice() << endl;
    qDebug() << "in stock: " << (*this).thisAtt.getQuantity() << endl;
    qDebug() << "------------------------------------------" << endl;
}

void Product::printDBProducts()
{

    qDebug() << "Here are all Active Products: ";
    for (int i = 0; i < DBProducts.size(); i++) {
        if(DBProducts[i].thisItem.getCategory() == "shirt")
        DBProducts[i].printCard();
    }

}

void Product::makeShirtsVector()
{
    for (int i = 0; i < DBProducts.size(); i++) {
        if(DBProducts[i].thisItem.getCategory() == "shirt")
        shirts.push_back(DBProducts[i]);
    }
    qDebug() << shirts[0].thisItem.getName();

}

void Product::makeSweatShirtsVector()
{
    for (int i = 0; i < DBProducts.size(); i++) {
        if(DBProducts[i].thisItem.getCategory() == "sweatshirt")
        sweatShirts.push_back(DBProducts[i]);
    }
    qDebug() << sweatShirts[0].thisItem.getName();

}

void Product::makeCapsVector()
{
    for (int i = 0; i < DBProducts.size(); i++) {
        if(DBProducts[i].thisItem.getCategory() == "cap")
        caps.push_back(DBProducts[i]);
    }
    qDebug() << caps[0].thisItem.getName();

}

void Product::makeCupsVector()
{
    for (int i = 0; i < DBProducts.size(); i++) {
        if(DBProducts[i].thisItem.getCategory() == "cup")
        cups.push_back(DBProducts[i]);
    }
    qDebug() << cups[0].thisItem.getName();

}

void Product::makeStickersVector()
{
    for (int i = 0; i < DBProducts.size(); i++) {
        if(DBProducts[i].thisItem.getCategory() == "sticker")
        stickers.push_back(DBProducts[i]);
    }
    qDebug() << stickers[0].thisItem.getName();

}

void Product::makeMiscVector()
{
    for (int i = 0; i < DBProducts.size(); i++) {
        if(DBProducts[i].thisItem.getCategory() == "misc")
        misc.push_back(DBProducts[i]);
    }
    qDebug() << misc[0].thisItem.getName();

}

void Product::makeAllVectors()
{
    makeShirtsVector();
    makeSweatShirtsVector();
    makeCapsVector();
    makeCupsVector();
    makeStickersVector();
    makeMiscVector();
}

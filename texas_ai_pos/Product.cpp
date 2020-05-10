#include "Product.h"


QVector<Product> Product::cart;
QVector<Product> Product::DBProducts;
QVector<InventoryItems> Product::itemsVector;
QVector<InventoryAttributes> Product::attsVector;

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

void Product::addToCartBtn()
{
    for (int i = 0; i < selected; i++)
        cart.push_back(*this);

    //this may need to be moved into the for loop, depending on design
    //keeping it outside is more efficient
    (*this).thisAtt.setQuantity((*this).thisAtt.getQuantity() - selected);

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

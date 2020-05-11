#include "Widget.h"
#include "ui_Widget.h"

//QVector<QString> Widget::names;
//QVector<double> Widget::prices;
//QVector<int> Widget::available;
//QVector<QString> Widget::sizes;
//QVector<Product> Widget::products;

//int ItemCard::index;

Widget::Widget(QWidget *parent)
:QWidget(parent), ui(new Ui::Widget)
{
    //Consider using db.open and db.close for efficiency. Ignore for now, but test later

    db.setDatabaseName(dsn);
/*
    if(!names.isEmpty()){
        names.clear();
        prices.clear();
        available.clear();
    }
*/
    if(db.open())
    {
        qDebug() << "Opened";

        //qDebug() << "Opened";

        //getActiveItems();



    QVector<InventoryItems> itemVec;
    QVector<InventoryAttributes> attVec;
    Product x;
    itemVec = x.getActiveItems();
    attVec = x.getActiveAtts();
    Product::makeProducts(itemVec, attVec);
    Product::printDBProducts();
    Product::makeAllVectors();





    qDebug() << itemVec[0].getName();
    qDebug() << attVec[0].getAttID();




    }else{
        qDebug() << "Error = " << db.lastError().text();
    }



    //connect(ui->widget, SIGNAL(clicked()), ui->listWidget, SLOT(ItemCard::updateCart()));


    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}




void Widget::on_btnShirts_clicked()
{
    qDebug() << ItemCard::index;
    ItemCard::index = 0;
    qDebug() << ItemCard::index;

}

void Widget::on_btnCaps_clicked()
{
    qDebug() << ItemCard::index;
    ItemCard::index = 0;
    qDebug() << ItemCard::index;

}

void Widget::updateCart()
{
    ui->listWidget->clear();
    for(int i = 0; i < Product::cart.count(); i++){
        QString line = Product::cart[i].thisItem.getName() + QString("      $%1.00").arg(Product::cart[i].thisAtt.getPrice());
        ui->listWidget->addItem(line);
    }
    Product::getTotal();
    ui->lblTotal->setText(QString("$%1.00").arg(Product::total));


}


void Widget::on_widget_6_addToCartPushed()
{
   updateCart();
}

void Widget::on_widget_addToCartPushed()
{
    updateCart();
}

void Widget::on_widget_2_addToCartPushed()
{
    updateCart();
}

void Widget::on_widget_3_addToCartPushed()
{
    updateCart();
}

void Widget::on_widget_4_addToCartPushed()
{
    updateCart();
}

void Widget::on_widget_5_addToCartPushed()
{
    updateCart();
}

void Widget::on_pushButton_2_clicked()
{
    Checkout checkout;
    checkout.setModal(true);
    checkout.exec();
}

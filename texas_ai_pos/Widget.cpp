#include "Widget.h"
#include "ui_Widget.h"

//QVector<QString> Widget::names;
//QVector<double> Widget::prices;
//QVector<int> Widget::available;
//QVector<QString> Widget::sizes;
//QVector<Product> Widget::products;



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

    qDebug() << itemVec[0].getName();
    qDebug() << attVec[0].getAttID();
    Product::makeProducts(itemVec, attVec);
    Product::printDBProducts();
    Product::makeAllVectors();



    }else{
        qDebug() << "Error = " << db.lastError().text();
    }


    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}




void Widget::on_btnShirts_clicked()
{
    ItemCard::index = 0;









}

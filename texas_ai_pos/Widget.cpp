#include "Widget.h"
#include "ui_Widget.h"

QVector<QString> Widget::names;
QVector<double> Widget::prices;
QVector<int> Widget::available;
QVector<QString> Widget::sizes;
QVector<Product> Widget::products;

Widget::Widget(QWidget *parent)
:QWidget(parent), ui(new Ui::Widget)
{
    //Consider using db.open and db.close for efficiency. Ignore for now, but test later

    db.setDatabaseName(dsn);


    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}
/*
QVector<InventoryItems> Widget::getActiveItems()
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
    qDebug() << itemsVector;

    return itemsVector;
}
*/



void Widget::on_btnShirts_clicked()
{

    if(!names.isEmpty()){
        names.clear();
        prices.clear();
        available.clear();
    }

    if(db.open())
    {
        qDebug() << "Opened";

        //qDebug() << "Opened";

        //getActiveItems();


        if(qry.exec("SELECT name, category, active, attribute, quantity, price FROM Product WHERE quantity > 0 and category = 'shirt';"))
          {
              while(qry.next())
              {
                  //QString  bass = qry.value(1).toString();
                  //ui->labelItemName1->setText(bass);
                  names << qry.value(0).toString();
                  qDebug() << names;
                  prices << qry.value(5).toInt();
                  qDebug() << prices;
                  available << qry.value(4).toInt();
                  qDebug() << available;
                  //names << qry.value(3).toString();
                  //qDebug() << sizes;




                  //qDebug() << qry.value(0).toString();
                  //qDebug() << "Closing...";
                  //db.close();


              }
              //namesC << (names);
              //pricesC << (prices);
              //availableC << (available);
              //sizesC << (sizes);


          }else{
              qDebug() << "Error = " << db.lastError().text();

          }



        //qDebug() << "Closing...";
        //db.close();
    }else{
        qDebug() << "Error = " << db.lastError().text();
    }


    int j = 0;
    for(int i = 0; i < 3; i++){
        for(j; j < 21; j++){
            //if (II[i].getID() == IA[j].getID()) {
       //Product products = {.name = names[i], .price = prices[j], .size = sizes[j], .available = available[j]};
           // }
        //qDebug() << x.getName() << x.getPrice() << x.getAvailable();
        }
    }




}

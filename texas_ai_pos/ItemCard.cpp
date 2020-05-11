#include "ItemCard.h"
#include "ui_ItemCard.h"

//QVector<QString> ItemCard::names;
//QVector<double> ItemCard::prices;
int ItemCard::index;
//QVector<QString> ItemCard::sizes;

ItemCard::ItemCard(QWidget *parent)
:QWidget(parent), ui(new Ui::ItemCard)
{
    ui->setupUi(this);
}

ItemCard::~ItemCard()
{
    delete ui;
}




void ItemCard::setShirts()
{



    if(index < Product::shirts.count())
    {


        QPixmap porky(":/res/pics/pics/porky shirt.jpg");
        QPixmap a_i(":/res/pics/pics/A&I Logo shirt.jpg");
        QPixmap alumn(":/res/pics/pics/alumni shirt.jpg");

        int w = ui->lblImage->width();
        int h = ui->lblImage->height();




        ui->lblItemName->setText(Product::shirts[index].thisItem.getName());
        ui->lblPrice->setText(QString("$%1.00").arg(Product::shirts[index].thisAtt.getPrice()));
        ui->lblCount->setNum(Product::shirts[index].thisAtt.getQuantity());



        QString wop = ui->lblItemName->text();

        if(wop == "Porky Shirt"){
            ui->lblImage->setPixmap(porky.scaled(w,h,Qt::KeepAspectRatio));
        }else if(wop == ("A&I Logo Shirt")){
                ui->lblImage->setPixmap(a_i.scaled(w,h,Qt::KeepAspectRatio));
        }else if(wop == ("Alumni Shirt")){
                ui->lblImage->setPixmap(alumn.scaled(w,h,Qt::KeepAspectRatio));
        }

        //qDebug() << wop;

        ui->boxSize->addItem(Product::DBProducts[index].thisAtt.getAttribute());

        do{
            index++;
            qDebug() << Product::DBProducts[index].thisAtt.getAttribute();
            qDebug() << index;
            ui->boxSize->addItem(Product::DBProducts[index].thisAtt.getAttribute());

        }while(Product::DBProducts[index].thisItem.getID() == Product::DBProducts[index+1].thisItem.getID());


        //Product::shirts.remove(0);

        //ui->boxSize->ad
        //qDebug() << Product::shirts[index].thisItem.getName();
        qDebug() << "before " << index;
        index++;
        qDebug() << "after " << index;

    }else{

        ui->lblItemName->setText("");
        ui->lblPrice->setText("");
        ui->lblCount->setText("");
        ui->lblImage->clear();
    }

}

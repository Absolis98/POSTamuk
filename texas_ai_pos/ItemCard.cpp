#include "ItemCard.h"
#include "ui_ItemCard.h"

//QVector<QString> ItemCard::names;
//QVector<double> ItemCard::prices;
//QVector<int> ItemCard::available;
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



    if(!Widget::names.isEmpty())
    {
        QPixmap porky(":/res/pics/pics/porky shirt.jpg");
        QPixmap a_i(":/res/pics/pics/A&I Logo shirt.jpg");
        QPixmap alumn(":/res/pics/pics/alumni shirt.jpg");

        int w = ui->lblImage->width();
        int h = ui->lblImage->height();




        ui->lblItemName->setText(Widget::names[0]);
        ui->lblPrice->setText(QString("$%1.00").arg(Widget::prices[0]));
        ui->lblCount->setNum(Widget::available[0]);


        QString wop = ui->lblItemName->text();

        if(!wop.compare("porky shirt")){
                    ui->lblImage->setPixmap(porky.scaled(w,h,Qt::KeepAspectRatio));
        }else if(!wop.compare("A&I Logo shirt")){
        ui->lblImage->setPixmap(a_i.scaled(w,h,Qt::KeepAspectRatio));
        }else if(!wop.compare("alumni shirt")){
            ui->lblImage->setPixmap(alumn.scaled(w,h,Qt::KeepAspectRatio));
            }

        qDebug() << wop;

        (Widget::names).remove(0);
        (Widget::prices).remove(0);
        (Widget::available).remove(0);
        //ui->boxSize->ad
        qDebug() << Widget::names;
    }else{

        ui->lblItemName->setText("");
        ui->lblPrice->setText("");
        ui->lblCount->setText("");
        ui->lblImage->clear();
    }
}

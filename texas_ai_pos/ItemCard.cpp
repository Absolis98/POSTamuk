#include "ItemCard.h"
#include "ui_ItemCard.h"


int ItemCard::index;


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

    qDebug() << index;
    ui->boxSize->clear();
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


        ui->boxSize->addItem(Product::DBProducts[index].thisAtt.getAttribute());
        connect(ui->boxSize, SIGNAL(currentTextChanged(QString)), this, SLOT(sizeChanged()));

        do{
            index++;
            //qDebug() << Product::DBProducts[index].thisAtt.getAttribute();

            ui->boxSize->addItem(Product::DBProducts[index].thisAtt.getAttribute());

        }while(Product::DBProducts[index].thisItem.getID() == Product::DBProducts[index+1].thisItem.getID());


        index++;

    }else{

        ui->lblItemName->setText("");
        ui->lblPrice->setText("");
        ui->lblCount->setText("");
        ui->lblImage->clear();

    }

}

void ItemCard::setCaps()
{
    ui->boxSize->clear();
    //qDebug() << Product::caps.count();
    if(index < Product::caps.count())
    {


        QPixmap porky(":/res/pics/pics/porky shirt.jpg");
        QPixmap a_i(":/res/pics/pics/A&I Logo shirt.jpg");
        QPixmap alumn(":/res/pics/pics/alumni shirt.jpg");

        int w = ui->lblImage->width();
        int h = ui->lblImage->height();




        ui->lblItemName->setText(Product::caps[index].thisItem.getName());
        ui->lblPrice->setText(QString("$%1.00").arg(Product::caps[index].thisAtt.getPrice()));
        ui->lblCount->setNum(Product::caps[index].thisAtt.getQuantity());



        QString wop = ui->lblItemName->text();

        if(wop == "Porky Shirt"){
            ui->lblImage->setPixmap(porky.scaled(w,h,Qt::KeepAspectRatio));
        }else if(wop == ("A&I Logo Shirt")){
                ui->lblImage->setPixmap(a_i.scaled(w,h,Qt::KeepAspectRatio));
        }else if(wop == ("Alumni Shirt")){
                ui->lblImage->setPixmap(alumn.scaled(w,h,Qt::KeepAspectRatio));
        }


        ui->boxSize->addItem("One Size");


        index++;

    }else{

        ui->lblItemName->setText("");
        ui->lblPrice->setText("");
        ui->lblCount->setText("");
        ui->lblImage->clear();
    }

}

void ItemCard::sizeChanged()
{
    int index2 = 0;

    if(ui->boxSize->currentText() == "small"){
        for(; index2 < Product::shirts.count(); index2++){
            if(Product::shirts[index2].thisItem.getName() == ui->lblItemName->text() && Product::shirts[index2].thisAtt.getAttribute() == ui->boxSize->currentText())
                break;
        }
        //qDebug() << index2;
        ui->lblPrice->setText(QString("$%1.00").arg(Product::shirts[index2].thisAtt.getPrice()));
        ui->lblCount->setText(QString::number(Product::shirts[index2].thisAtt.getQuantity()));
    }
    else if(ui->boxSize->currentText() == "medium"){
        for(; index2 < Product::shirts.count(); index2++){
            if(Product::shirts[index2].thisItem.getName() == ui->lblItemName->text() && Product::shirts[index2].thisAtt.getAttribute() == ui->boxSize->currentText())
                break;
        }
        //qDebug() << index2;
        ui->lblPrice->setText(QString("$%1.00").arg(Product::shirts[index2].thisAtt.getPrice()));
        ui->lblCount->setText(QString::number(Product::shirts[index2].thisAtt.getQuantity()));
    }
    else if(ui->boxSize->currentText() == "large"){
        for(; index2 < Product::shirts.count(); index2++){
            if(Product::shirts[index2].thisItem.getName() == ui->lblItemName->text() && Product::shirts[index2].thisAtt.getAttribute() == ui->boxSize->currentText())
                break;
        }
        //qDebug() << index2;
        ui->lblPrice->setText(QString("$%1.00").arg(Product::shirts[index2].thisAtt.getPrice()));
        ui->lblCount->setText(QString::number(Product::shirts[index2].thisAtt.getQuantity()));
    }

}

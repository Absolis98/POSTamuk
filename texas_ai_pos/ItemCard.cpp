#include "ItemCard.h"
#include "ui_ItemCard.h"


int ItemCard::index;



ItemCard::ItemCard(QWidget *parent)
:QWidget(parent), ui(new Ui::ItemCard)
{
    ui->setupUi(this);
    //connect(this, SIGNAL(addToCartPushed()), Widget::)
}

ItemCard::~ItemCard()
{
    delete ui;
}




void ItemCard::setShirts()
{

    //qDebug() << index;
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


        ui->boxSize->addItem(Product::shirts[index].thisAtt.getAttribute());
        connect(ui->boxSize, SIGNAL(currentTextChanged(QString)), this, SLOT(sizeChanged()));


        do{
            index++;
            //qDebug() << Product::DBProducts[index].thisAtt.getAttribute();
            ui->boxSize->addItem(Product::shirts[index].thisAtt.getAttribute());



        }while(Product::DBProducts[index].thisItem.getID() == Product::DBProducts[index+1].thisItem.getID());

        /*
        do{
            index++;
            //qDebug() << Product::DBProducts[index].thisAtt.getAttribute();



        }while(Product::shirts[index].thisItem.getID() == Product::shirts[index+1].thisItem.getID());

        */
        index++;

    }else{

        ui->lblItemName->setText("");
        ui->lblPrice->setText("");
        ui->lblCount->setText("");
        ui->lblImage->clear();

    }

}

void ItemCard::setSweatShirts()
{

    //qDebug() << index;
    ui->boxSize->clear();
    if(index < Product::sweatShirts.count())
    {


        QPixmap blue(":/res/pics/pics/Blue Zip-Up Hoodie.jpg");

        int w = ui->lblImage->width();
        int h = ui->lblImage->height();




        ui->lblItemName->setText(Product::sweatShirts[index].thisItem.getName());
        ui->lblPrice->setText(QString("$%1.00").arg(Product::sweatShirts[index].thisAtt.getPrice()));
        ui->lblCount->setNum(Product::sweatShirts[index].thisAtt.getQuantity());



        QString wop = ui->lblItemName->text();

        if(wop == "Blue Zip-Up Hoodie"){
            ui->lblImage->setPixmap(blue.scaled(w,h,Qt::KeepAspectRatio));
        }


        ui->boxSize->addItem(Product::sweatShirts[index].thisAtt.getAttribute());
        connect(ui->boxSize, SIGNAL(currentTextChanged(QString)), this, SLOT(sizeChanged()));

        do{
            index++;
            //qDebug() << Product::DBProducts[index].thisAtt.getAttribute();

            ui->boxSize->addItem(Product::sweatShirts[index].thisAtt.getAttribute());

        }while(Product::DBProducts[index + 18].thisItem.getID() == Product::DBProducts[index+19].thisItem.getID());


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


        QPixmap black(":/res/pics/pics/Black A&I Visor.jpg");
        QPixmap champs(":/res/pics/pics/National Champs Cap.jpg");
        QPixmap white(":/res/pics/pics/White A&I Visor.jpg");
        QPixmap camo(":/res/pics/pics/Camo A&I Cap.jpg");

        int w = ui->lblImage->width();
        int h = ui->lblImage->height();




        ui->lblItemName->setText(Product::caps[index].thisItem.getName());
        ui->lblPrice->setText(QString("$%1.00").arg(Product::caps[index].thisAtt.getPrice()));
        ui->lblCount->setNum(Product::caps[index].thisAtt.getQuantity());



        QString wop = ui->lblItemName->text();

        if(wop == "National Champs Cap"){
            ui->lblImage->setPixmap(champs.scaled(w,h,Qt::KeepAspectRatio));
        }else if(wop == ("White A&I Visor")){
                ui->lblImage->setPixmap(white.scaled(w,h,Qt::KeepAspectRatio));
        }else if(wop == ("Black A&I Visor")){
                ui->lblImage->setPixmap(black.scaled(w,h,Qt::KeepAspectRatio));
        }else if(wop == ("Camo A&I Cap")){
            ui->lblImage->setPixmap(camo.scaled(w,h,Qt::KeepAspectRatio));
    }


        ui->boxSize->addItem("one size");


        index++;

    }else{

        ui->lblItemName->setText("");
        ui->lblPrice->setText("");
        ui->lblCount->setText("");
        ui->lblImage->clear();
    }

}

void ItemCard::setCups()
{
    ui->boxSize->clear();
    //qDebug() << Product::caps.count();
    if(index < Product::cups.count())
    {


        QPixmap cup(":/res/pics/pics/White A&I Cup.jpg");
        QPixmap white(":/res/pics/pics/White Porky Mug.jpg");
        QPixmap clear(":/res/pics/pics/Clear A&I Mug.jpg");

        int w = ui->lblImage->width();
        int h = ui->lblImage->height();




        ui->lblItemName->setText(Product::cups[index].thisItem.getName());
        ui->lblPrice->setText(QString("$%1.00").arg(Product::cups[index].thisAtt.getPrice()));
        ui->lblCount->setNum(Product::cups[index].thisAtt.getQuantity());



        QString wop = ui->lblItemName->text();

        if(wop == "White A&I Cup"){
            ui->lblImage->setPixmap(cup.scaled(w,h,Qt::KeepAspectRatio));
        }else if(wop == ("White Porky Mug")){
                ui->lblImage->setPixmap(white.scaled(w,h,Qt::KeepAspectRatio));
        }else if(wop == ("Clear A&I Mug")){
                ui->lblImage->setPixmap(clear.scaled(w,h,Qt::KeepAspectRatio));
        }

        ui->boxSize->addItem("one size");


        index++;

    }else{

        ui->lblItemName->setText("");
        ui->lblPrice->setText("");
        ui->lblCount->setText("");
        ui->lblImage->clear();
    }

}

void ItemCard::setStickers()
{
    ui->boxSize->clear();
    //qDebug() << Product::caps.count();
    if(index < Product::stickers.count())
    {


        QPixmap ai(":/res/pics/pics/Texas A&I Sticker.jpg");
        QPixmap eng(":/res/pics/pics/A&I Engineer Sticker.jpg");

        int w = ui->lblImage->width();
        int h = ui->lblImage->height();




        ui->lblItemName->setText(Product::stickers[index].thisItem.getName());
        ui->lblPrice->setText(QString("$%1.00").arg(Product::stickers[index].thisAtt.getPrice()));
        ui->lblCount->setNum(Product::stickers[index].thisAtt.getQuantity());



        QString wop = ui->lblItemName->text();

        if(wop == "Texas A&I Sticker"){
            ui->lblImage->setPixmap(ai.scaled(w,h,Qt::KeepAspectRatio));
        }else if(wop == ("A&I Engineer Sticker")){
                ui->lblImage->setPixmap(eng.scaled(w,h,Qt::KeepAspectRatio));
        }

        ui->boxSize->addItem("one size");


        index++;

    }else{

        ui->lblItemName->setText("");
        ui->lblPrice->setText("");
        ui->lblCount->setText("");
        ui->lblImage->clear();
    }

}

void ItemCard::setMisc()
{
    ui->boxSize->clear();
    //qDebug() << Product::caps.count();
    if(index < Product::misc.count())
    {


        QPixmap flag(":/res/pics/pics/A&I Flag.jpg");

        int w = ui->lblImage->width();
        int h = ui->lblImage->height();




        ui->lblItemName->setText(Product::misc[index].thisItem.getName());
        ui->lblPrice->setText(QString("$%1.00").arg(Product::misc[index].thisAtt.getPrice()));
        ui->lblCount->setNum(Product::misc[index].thisAtt.getQuantity());



        QString wop = ui->lblItemName->text();

        if(wop == "A&I Flag"){
            ui->lblImage->setPixmap(flag.scaled(w,h,Qt::KeepAspectRatio));
        }

        ui->boxSize->addItem("one size");


        index++;

    }else{

        ui->lblItemName->setText("");
        ui->lblPrice->setText("");
        ui->lblCount->setText("");
        ui->lblImage->clear();
    }

}


//could be a bug in here. change the size, add to cart. add to cart again and the incorrect object is added to the cart vector
void ItemCard::sizeChanged()
{
    int index2 = 0;

    //if(ui->)
    if(ui->boxSize->currentText() == "small"){
        for(; index2 < Product::DBProducts.count(); index2++){
            if(Product::DBProducts[index2].thisItem.getName() == ui->lblItemName->text() && Product::DBProducts[index2].thisAtt.getAttribute() == ui->boxSize->currentText())
                break;
        }
        //qDebug() << index2;
        ui->lblPrice->setText(QString("$%1.00").arg(Product::DBProducts[index2].thisAtt.getPrice()));
        ui->lblCount->setText(QString::number(Product::DBProducts[index2].thisAtt.getQuantity()));
    }
    else if(ui->boxSize->currentText() == "medium"){
        for(; index2 < Product::DBProducts.count(); index2++){
            if(Product::DBProducts[index2].thisItem.getName() == ui->lblItemName->text() && Product::DBProducts[index2].thisAtt.getAttribute() == ui->boxSize->currentText())
                break;
        }
        //qDebug() << index2;
        ui->lblPrice->setText(QString("$%1.00").arg(Product::DBProducts[index2].thisAtt.getPrice()));
        ui->lblCount->setText(QString::number(Product::DBProducts[index2].thisAtt.getQuantity()));
    }
    else if(ui->boxSize->currentText() == "large"){
        for(; index2 < Product::DBProducts.count(); index2++){
            if(Product::DBProducts[index2].thisItem.getName() == ui->lblItemName->text() && Product::DBProducts[index2].thisAtt.getAttribute() == ui->boxSize->currentText())
                break;
        }
        //qDebug() << index2;
        ui->lblPrice->setText(QString("$%1.00").arg(Product::DBProducts[index2].thisAtt.getPrice()));
        ui->lblCount->setText(QString::number(Product::DBProducts[index2].thisAtt.getQuantity()));
    }

}

void ItemCard::addToCart(){
    int index2 = 0;

    for(; index2 < Product::DBProducts.count(); index2++){
        if((Product::DBProducts[index2].thisItem.getName() == ui->lblItemName->text()) && (Product::DBProducts[index2].thisAtt.getAttribute() == ui->boxSize->currentText()))
            break;
    }
    qDebug() << index2;

    for (int i = 0; i < ui->boxCount->value(); i++)
        Product::cart.push_back(Product::DBProducts[index2]);


    //changes availability. Needs work. Must change object values within the vector
    int current = ui->lblCount->text().toInt();
    int selected = ui->boxCount->value();
    int result = current - selected;

    //very inefficient. fix later
    Product::DBProducts[index2].thisAtt.setQuantity(result);
    Product::shirts.clear();
    Product::caps.clear();
    Product::cups.clear();
    Product::misc.clear();
    Product::stickers.clear();
    Product::makeAllVectors();

    ui->lblCount->setText(QString::number(result));
    /////////////////////////////////////////////////////////////////////


    ui->boxCount->setValue(0);

    for(int i=0; i < Product::cart.count(); i++){
    qDebug() << Product::cart[i].thisItem.getName();
    qDebug() << Product::cart[i].thisAtt.getAttribute();
    }
    emit addToCartPushed();
}

void ItemCard::on_btnAddToCart_clicked()
{
    addToCart();

}

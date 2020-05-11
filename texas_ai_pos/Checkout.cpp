#include "Checkout.h"
#include "ui_Checkout.h"

Checkout::Checkout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Checkout)
{


    ui->setupUi(this);
    ui->listWidget->clear();
    for(int i = 0; i < Product::cart.count(); i++){
        QString line = Product::cart[i].thisItem.getName() + QString("      $%1.00").arg(Product::cart[i].thisAtt.getPrice());
        ui->listWidget->addItem(line);
    }
    ui->lblTotal->setText(QString("$%1.00").arg(Product::total));
}

Checkout::~Checkout()
{
    delete ui;
}

void Checkout::on_pushButton_clicked()
{
    double total = Product::total;
    double cashGiven = ui->lineEdit->text().toDouble();
    double change = total - cashGiven;
    ui->lblChange->setText(QString("$%1.00").arg(change));
}

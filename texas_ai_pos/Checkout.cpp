#include "Checkout.h"
#include "ui_Checkout.h"

Checkout::Checkout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Checkout)
{
    ui->setupUi(this);
}

Checkout::~Checkout()
{
    delete ui;
}

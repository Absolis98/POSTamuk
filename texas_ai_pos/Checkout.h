#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <QDialog>
#include "Product.h"
#include "Widget.h"

namespace Ui {
class Checkout;
}

class Checkout : public QDialog
{
    Q_OBJECT

public:
    explicit Checkout(QWidget *parent = nullptr);
    ~Checkout();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Checkout *ui;
};

#endif // CHECKOUT_H

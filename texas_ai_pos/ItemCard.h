#ifndef ITEMCARD_H
#define ITEMCARD_H

#include <QWidget>
#include <QVector>
#include <QPixmap>
#include "Widget.h"
#include "Product.h"






namespace Ui {
class ItemCard;
}

class ItemCard : public QWidget
{
    Q_OBJECT

public:
    explicit ItemCard(QWidget *parent = nullptr);
    ~ItemCard();
    QString itemName;
    double itemPrice;
    int itemsInStock;
    QVector<QString> itemSizes;

    static int index;


signals:
    void signal1();

public slots:
    void setShirts();
    //void setSweatShirts();
    void setCaps();
    //void setCups();
    //void setMisc();
    //void setStickers();


    void sizeChanged();


private:
    Ui::ItemCard *ui;
};

#endif // ITEMCARD_H

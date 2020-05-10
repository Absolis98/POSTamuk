#ifndef ITEMCARD_H
#define ITEMCARD_H

#include <QWidget>
#include <QVector>
#include <QPixmap>
#include "Widget.h"







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

    static QVector<QString> names;
    static QVector<double> prices;
    static QVector<int> available;
    static QVector<QString> sizes;
signals:
    void signal1();

public slots:
    void setShirts();
    //void setSweatShirts();
    //void setCups();
    //void setMisc();
    //void setStickers();
    //void setCaps();
    //static void createItemVectors();

private:
    Ui::ItemCard *ui;
};

#endif // ITEMCARD_H

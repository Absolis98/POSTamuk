#ifndef WIDGET_H
#define WIDGET_H

//#include "ItemCard.h"

#include <QWidget>
#include <QtSql>
#include <QtDebug>

#include "Product.h"
#include "InventoryAttributes.h"
#include "InventoryItems.h"
#include <iostream>
#include "ItemCard.h"



using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    QString servername = "LOCALHOST\\SQLEXPRESS";
    QString dbname = "master";
    QString user = "ADMIN";
    QString password = "beepboop";
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    QString dsn = QString ("DRIVER={SQL Server};SERVER=%1;DATABASE=%2;UID=%3;PWD=%4;").arg(servername).arg(dbname).arg(user).arg(password);

    QSqlQuery qry;

    //static QVector<QString> names;
    //static QVector<double> prices;
    //static QVector<int> available;
    //static QVector<QString> sizes;



    //static QVector<Product> products;



    //QVector<InventoryItems> getActiveItems();
    //QVector<Product> makeProducts(QVector<InventoryItems> &II, QVector<InventoryAttributes> &&IA);


    //static QVector<QString> pictureID;




signals:




//public slots:
//    void on_showShirts_clicked();


private slots:
    void on_btnShirts_clicked();


private:
    Ui::Widget *ui;
};
#endif // WIDGET_H

#ifndef WIDGET_H
#define WIDGET_H

//#include "ItemCard.h"

#include <QWidget>
#include <QtSql>
#include <QtDebug>

//#include "Product.h"
/*
struct Product{
    QString name;
    double price;
    int available;
    QString size;

    void setName(QString n){
        this->name = n;
    }
    void setPrice(double p){
        this->price = p;
    }
    void setAvailable(int a){
        this->available = a;
    }
    void setSize(QString s){
        this->size = s;
    }
    QString getName(){
        return name;
    }
    double getPrice(){
        return price;
    }
    int getAvailable(){
        return available;
    }
    QString getSize(){
        return size;
    }
};
*/

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

    static QVector<QString> names;
    static QVector<double> prices;
    static QVector<int> available;
    static QVector<QString> sizes;

    //static QVector<Product> products;

    //static QVector<QString> namesC;
    //static QVector<double> pricesC;
    //static QVector<int> availableC;
    //static QVector<QString> sizesC;

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

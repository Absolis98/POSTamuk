#ifndef DBAPI_H
#define DBAPI_H

#include "InventoryItems.h"
#include "InventoryAttributes.h"

#include <vector>
#include <iostream>
#include <QtSql>
#include <QtDebug>


using namespace std;

class DBAPI
{

private:
    QString servername = "LOCALHOST\\SQLEXPRESS";
    QString dbname = "master";
    QString user = "ADMIN";
    QString password = "beepboop";
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    QString dsn = QString ("DRIVER={SQL Server};SERVER=%1;DATABASE=%2;UID=%3;PWD=%4;").arg(servername).arg(dbname).arg(user).arg(password);

    QSqlQuery qry;




public:
	


	//------------------------------------------------------------
	//CLASS FUNCTIONS
	//------------------------------------------------------------
    DBAPI(QString db_name, QString user, QString pass);
	void connectDB();


	//------------------------------------------------------------
	//CUSTOMER FUNCTIONS
	//------------------------------------------------------------
	void createCustomer();
	void deleteCustomer();
	void editCustomer(int id);
    void editCustomer(QString first, QString last);

	void getCustomers();


	//------------------------------------------------------------
	//INVENTORY ITEM FUNCTIONS
	//------------------------------------------------------------

	void createItem();
	void deleteItem();

	vector<InventoryItems> getActiveItems(); //returns a vector containing all active item objects
	vector<int> getActiveIds();

	int getImageID(int id);

    bool isActive(int id);

	//------------------------------------------------------------
	//INVENTORY ATTRIBUTE FUNCTIONS
	//------------------------------------------------------------

	//Abraham added functions
	vector<InventoryAttributes> getAllDBAtts(); //returns a vector containing all ItemAttributes objects
	//---------------
	void createAttribute();
	void deleteAttribute();

	//this will be an attribute for 
	//makeProducts(vector<InventoryItems>, vector<InventoryAttributes>) class
	//in Product.h
	//vector<InventoryAttributes> getAttributes(int id);



	//------------------------------------------------------------
	//PURCHASE FUNCTIONS
	//------------------------------------------------------------

	void createPurchase();
	void executePurchase();

};







#endif


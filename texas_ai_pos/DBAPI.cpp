#include "DBAPI.h"
#include <iostream>


using namespace std;


DBAPI::DBAPI(QString db_name, QString user, QString pass)
{
	this->db_name = db_name;
	this->user = user;
	this->pass = pass;
}



void DBAPI::connectDB()
{



    if(db.open())
    {
        qDebug() << "Opened";

        //qDebug() << "Opened";

        //getActiveItems();


        if(qry.exec("SELECT name, category, active, attribute, quantity, price FROM Product WHERE quantity > 0 and category = 'shirt';"))
          {
              while(qry.next())
              {
                  //QString  bass = qry.value(1).toString();
                  //ui->labelItemName1->setText(bass);
                  names << qry.value(0).toString();
                  qDebug() << names;
                  prices << qry.value(5).toInt();
                  qDebug() << prices;
                  available << qry.value(4).toInt();
                  qDebug() << available;
                  //names << qry.value(3).toString();
                  //qDebug() << sizes;




                  //qDebug() << qry.value(0).toString();
                  //qDebug() << "Closing...";
                  //db.close();


              }
              //namesC << (names);
              //pricesC << (prices);
              //availableC << (available);
              //sizesC << (sizes);


          }else{
              qDebug() << "Error = " << db.lastError().text();

          }



        //qDebug() << "Closing...";
        //db.close();
    }else{
        qDebug() << "Error = " << db.lastError().text();
    }


}




//-----------------------------------------------

//Inventory Item Related Methods

//-----------------------------------------------

vector<InventoryItems> DBAPI::getActiveItems()
{
	int numItems = 0;
	vector<InventoryItems> itemsVector;

	try
	{
		SACommand cmd(
			&con,
			"SELECT id, name, category, description, imageID FROM inventory_items WHERE active=1;"
		);

		cmd.Execute();

		while (cmd.FetchNext())
		{
			numItems++;
			itemsVector.resize(numItems);


			int id;
            QString name;
            QString category;
            QString description;
            QString imageID;

			id = (sa_int64_t)cmd.Field(1).asNumeric();
            name = (const char*)cmd.Field(2).asQString();
            category = (const char*)cmd.Field(3).asQString();
            description = (const char*)cmd.Field(4).asQString();
            imageID = (const char*)cmd.Field(5).asQString();

			itemsVector[numItems - 1].setID(id);
			itemsVector[numItems - 1].setName(name);
			itemsVector[numItems - 1].setCategory(category);
			itemsVector[numItems - 1].setDescription(description);
		}

		return itemsVector;

	}
	catch (SAException& x)
	{
		try
		{
			con.Rollback();
		}
		catch (SAException&)
		{

		}

		cout << (const char*)x.ErrText() << endl;

	}

}


vector<int> DBAPI::getActiveIds()
{
	vector<int> vec;
	return vec;
}

//-----------------------------------------------

//Inventory Item Related Methods

//-----------------------------------------------

vector<InventoryAttributes> DBAPI::getAllDBAtts()
{
	int numAttributes = 0;
	vector<InventoryAttributes> attributesVector;

	try
	{
		SACommand cmd(
			&con,
			"Select attributeID, itemID, attribute, quantity, price FROM inventory_attributes;"
		);

		cmd.Execute();

		while (cmd.FetchNext())
		{
			numAttributes++;
			attributesVector.resize(numAttributes);

			int attID;
			int itemID;
            QString attribute;
			int quantity;
			double price;

			attID = (sa_int64_t)cmd.Field(1).asNumeric();
			itemID = (sa_int64_t)cmd.Field(2).asNumeric();
            attribute = (const char*)cmd.Field(3).asQString();
			quantity = (sa_int64_t)cmd.Field(4).asNumeric();
			price = (double)cmd.Field(5).asNumeric();

			attributesVector[numAttributes - 1].setAttID(attID);
			attributesVector[numAttributes - 1].setID(itemID);
			attributesVector[numAttributes - 1].setAttribute(attribute);
			attributesVector[numAttributes - 1].setQuantity(quantity);
			attributesVector[numAttributes - 1].setPrice(price);
		}
		return attributesVector;
	}
	catch (SAException& x)
	{
		try
		{
			con.Rollback();
		}
		catch (SAException&)
		{

		}

		cout << (const char*)x.ErrText() << endl;

	}


}


/*QString DBAPI::getItemName(int id)
{
	return "name";
}*/

//-----------------------------------------------

//Customer Related Methods:

//-----------------------------------------------

void DBAPI::createCustomer()
{

	try
	{
		SACommand cmd(
			&con,
			" "
		);

		cmd.Execute();

		cout << endl << "Rows Affected: " << cmd.RowsAffected() << endl;

	}
	catch (SAException& x)
	{
		try
		{
			con.Rollback();
		}
		catch (SAException&)
		{

		}

		cout << (const char*)x.ErrText() << endl;

	}

}

void DBAPI::deleteCustomer()
{


	try
	{
		SACommand cmd(
			&con,
			" "
		);

		cmd.Execute();

		cout << endl << "Rows Affected: " << cmd.RowsAffected() << endl;

	}
	catch (SAException& x)
	{
		try
		{
			con.Rollback();
		}
		catch (SAException&)
		{

		}

		cout << (const char*)x.ErrText() << endl;

	}

}

void DBAPI::getCustomers()
{
	try
	{

		SACommand cmd(
			&con,
			"SELECT first, last FROM customers;"
		);

		cmd.Execute();


		if (cmd.isResultSet())
		{

			while (cmd.FetchNext())
			{
                cout << (const char*)cmd.Field("first").asQString() << " " <<
                    (const char*)cmd.Field("last").asQString() << endl;
			}

		}

	}
	catch (SAException& x)
	{
		try
		{
			con.Rollback();
		}
		catch (SAException&)
		{

		}

		cout << (const char*)x.ErrText() << endl;

	}


}



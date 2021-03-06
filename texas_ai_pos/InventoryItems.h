#ifndef INVENTORYITEMS_H
#define INVENTORYITEMS_H
#include <iostream>

#include <QString>

class InventoryItems
{
public:
	InventoryItems();
    InventoryItems(int id, QString n, QString c, QString d, bool a);
	~InventoryItems();
	int ID;
    QString name;
    QString category;
    QString description;
	bool active;

	//getters and setters, to be modified.
	//will pill/push from database and have built in logic
	int getID();
    QString getName();
    QString getCategory();
    QString getDescription();
	bool getActive();
	void setID(int);
    void setName(QString);
    void setCategory(QString);
    void setDescription(QString);
	void setActive(bool);

protected:

private:
};

#endif // INVENTORYITEMS_H



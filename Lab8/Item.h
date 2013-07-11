#ifndef _ITEM
#define _ITEM

#include <iostream>

using namespace std;



class Item
{
public:
	Item();
	Item(const string& name, double price);
	double getPrice();
	void setPrice(double price);
	void setName(string name);
	string getName();
	void friend print(Item& item);
	friend ostream& operator<<(ostream& out, Item& item);
	friend void operator>>(istream& in, Item& item);
private:
	string m_name;
	double m_price;

};

#endif
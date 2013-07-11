#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

Item::Item()
{
m_name = "";
m_price = 0;
}

Item::Item(const string& name, double price)
{
	m_name = name;
	m_price = price;

}
string Item::getName()
{
	return m_name;
}
void Item::setName(string name)
{
	m_name = name;
}

void Item::setPrice(double price)
{
	m_price = price;
}

double Item::getPrice()
{
	return m_price;
}

ostream& operator<< (ostream& out, Item& item)
{
	out << "Item: " << item.m_name << " Price: $" << item.m_price << endl;
	return out;
}
void operator>>(istream& in, Item& item)
{
		string x_name, y_price;
		double price;
		getline(in, x_name);
		item.setName(x_name);
		getline(in, y_price);
		price = atof(y_price.c_str());
		item.setPrice(price);
}
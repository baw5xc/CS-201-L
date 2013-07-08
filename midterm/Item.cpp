#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

Item::Item(){}

Item::Item(string name, double price)
{
	m_name = name;
	m_price = price;
}

void Item::setName(string name)
{
	m_name = name;
}

string Item::getName()
{
	return m_name;
}
void Item::setPrice(double price)
{
	m_price = price;
}

double Item::getPrice()
{
	return m_price;
}




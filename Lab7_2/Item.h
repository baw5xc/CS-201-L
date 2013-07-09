#ifndef _ITEM_
#define _ITEM_

#include <iostream>
#include <string>

using namespace std;

class Item
{
public:
	Item();
	Item( string name, double price);
	void setName(string name);
	string getName();
	void setPrice(double price);
	double getPrice();

private:

	string m_name;
	double m_price;


};




#endif
#ifndef MONEY_
#define MONEY_

#include <iostream>
#include <string>

using namespace std;

class Money
{
public:
	Money();
	Money(double amount);
	Money(double amount, string unit);
	double getValue();
	string getUnit();
	friend Money operator+ (Money& m1, Money& m2);

private:
	double m_amount;
	string m_unit;

};


#endif

Money::Money(){}

Money::Money(double amount)
{
	m_amount = amount;
	// set m_unit variable to it's default value "dollar" or "$".
}

Money::Money(double amount, string unit)
{
	m_amount = amount;
	m_unit = unit;
}

double Money::getValue()
{
	return m_amount;
}

string Money::getUnit()
{
	return m_unit;
}

Money operator+ (Money& m1, Money& m2)
{
	double sum = ( m1.m_amount + m2.m_amount );
	return Money(sum);
	
}
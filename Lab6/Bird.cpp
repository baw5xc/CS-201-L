#include "Bird.h"
#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

Bird::Bird()
{
	m_name = "";
	m_canFly = true;

}
void Bird::Setup(string name, bool canFly, const string foodHabit, double weight, double length)
{
	m_name = name;
	m_canFly = canFly;
	m_foodHabit = foodHabit;
	Animal::Setup(weight, length);
	
}
bool Bird::getCanFly()
{
	return m_canFly;
}
string Bird::getFoodHabit()
{
	return m_foodHabit;
}

#ifndef BIRD_
#define BIRD_

#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

class Bird : public Animal
{
public:
	Bird();
	void Setup(string name, bool canFly, const string foodHabit, double weight, double length);
	bool getCanFly();
	string getFoodHabit();

private:
	string m_name;
	bool m_canFly;
	string m_foodHabit;

};






#endif
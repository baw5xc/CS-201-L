#ifndef DOG_
#define DOG_

#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

class Dog : public Animal
{
public:
	Dog();
	void Setup(const string &breed, double lifeSpan, double weight, double length);
	string getBreed();
	double getLifespan();

private:
	string m_breed;
	double m_lifeSpan;
};

#endif
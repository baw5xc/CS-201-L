#include "Dog.h"
#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

Dog::Dog()
{
	m_breed = "";
	m_lifeSpan = 0;
}
void Dog::Setup(const string &breed, double lifeSpan, double weight, double length)
{
	m_breed = breed;
	m_lifeSpan = lifeSpan;
	Animal::Setup(weight, length);

}
string Dog::getBreed()
{
	return m_breed;
}
double Dog::getLifespan()
{
	return m_lifeSpan;
}

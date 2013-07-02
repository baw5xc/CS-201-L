#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal()
{
}
void Animal::Setup(double weight, double length)
{
	m_weight = weight;
	m_length = length;
}

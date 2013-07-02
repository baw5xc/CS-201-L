#ifndef ANIMAL_
#define ANIMAL_

#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	Animal();
	void Setup(double weight, double length);

private:
	double m_weight;
	double m_length;


};


#endif
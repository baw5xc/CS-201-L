#ifndef ANIMAL_
#define ANIMAL_

#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	Animal();
	Animal(string speciesName);
	virtual void Action();

private:
	string m_speciesName;

};

#endif

Animal::Animal()
{
	m_speciesName = "";
}

Animal::Animal(string speciesName)
{
	m_speciesName = speciesName;
}
void Animal::Action()
{
	cout << "I am a living thing." << endl;
}


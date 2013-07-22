#ifndef DOG_
#define DOG_

#include <iostream>
#include <string>

using namespace std;

class Dog: public Animal
{
public:
	Dog();
	Dog(string speciesName);
	void Action(); // specify it as virtual

private:
	string m_speciesName;

};

#endif

Dog::Dog()
{
	m_speciesName = "";
}

Dog::Dog(string speciesName)
{
	m_speciesName = speciesName;
}
void Dog::Action()
{
	cout << "Huffs! I like my master." << endl;
}
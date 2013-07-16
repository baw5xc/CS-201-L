#ifndef BIRD_
#define BIRD_

#include <iostream>
#include <string>

using namespace std;

class Bird: public Animal
{
public:
	Bird();
	Bird(string speciesName);
	void Action();

private:
	string m_speciesName;

};

#endif

Bird::Bird()
{
	m_speciesName = "";
}

Bird::Bird(string speciesName)
{
	m_speciesName = speciesName;
}
void Bird::Action()
{
	cout << "I just love to fly, pity the humans can’t!" << endl;
}

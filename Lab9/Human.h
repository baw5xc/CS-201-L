#ifndef HUMAN_
#define HUMAN_

#include <iostream>
#include <string>

using namespace std;

class Human: public Animal
{
public:
	Human();
	Human(string speciesName);
	void Action();

private:
	string m_speciesName;

};

#endif

Human::Human()
{
	m_speciesName = "";
}

Human::Human(string speciesName)
{
	m_speciesName = speciesName;
}
void Human::Action()
{
	cout << "I can walk, run and tame other animals." << endl;
}

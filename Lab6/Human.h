#ifndef HUMAN_
#define HUMAN_

#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

class Human: public Animal
{

public:
	Human();
	void Setup(const string &ethnic, const string &language, double weight, double length);
	string getEthnic();
	string getLanguage();

private:
	string m_ethnic;
	string m_language;

};




#endif 
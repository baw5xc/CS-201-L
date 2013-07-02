#include "Animal.h"
#include "Human.h"
#include <iostream>

using namespace std;

Human::Human()
{
	m_ethnic = "";
	m_language = "";

}
void Human::Setup(const string &ethnic, const string &language, double weight, double length)
{
	m_ethnic = ethnic;
	m_language = language;
	Animal::Setup(weight, length);
}
string Human::getEthnic()
{
	return m_ethnic;
}
string Human::getLanguage()
{
	return m_language;
}


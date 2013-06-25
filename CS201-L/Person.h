#ifndef PERSON_
#define PERSON_

#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	Person(string name, string DOB)
	{
		name = "";
		DOB = "";
	}
	void setName(string n);
	void setDOB(string dob);

	~Person();
private:
	string name;
	string DOB;
	
};

#endif
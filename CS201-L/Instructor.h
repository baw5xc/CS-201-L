#ifndef INSTRUCTOR_
#define INSTRUCTOR_

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Instructor: public Person {
public:
	//constructor with initialization
	Instructor(string office, string designation)
	{
		office = "";
		desgination = "";
	}

	void setOffice(string off_num);
	void setDesignation(string des);

	~Instructor(); //destructor
private:
	string office;
	string designation;

};

#endif
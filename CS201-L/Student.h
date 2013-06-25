#ifndef STUDENT_
#define STUDENT_

#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

class Student: public Person {
public:
	Student(string ID, string cgpa);
	void setID (string id);
	void setCGPA (string cgpa);
	
	~Student();
private:
	string ID;
	string CGPA;

};

#endif
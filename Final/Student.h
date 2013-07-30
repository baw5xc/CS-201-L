#ifndef STUDENT_
#define STUDENT_

#include <iostream>

using namespace std;

class Student
{
public:
	Student();
	Student(int id, string name, double cgpa);
	int getId();
	string getName();
	double getCgpa();


private:
	int m_id;
	string m_name;
	double m_cgpa;


}





#endif
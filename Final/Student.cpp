

#include <iostream>
#include <string>
#include "Student.h"

using namespace std;


Student::Student()
{
	m_id = 0;
	m_name = "";
	m_cgpa = 0.0;
	
}

Student::Student(int id, string name, double cgpa)
{
	m_id = id;
	m_name = name;
	m_cgpa = cgpa;
}

int Student::getId()
{
	return m_id;
}

string Student::getName()
{
	return m_name;
}

double Student::getCgpa()
{
	return m_cgpa;
}



#include <iostream>
#include <string>
#include <fstream>

#include "Student.h"
#include "SortedList.h"


using namespace std;

int main()
{
	int index = 0;
	SortedList sortedlist;
	Student student[20];

	ifstream infile;
	infile.open("students.txt");
	char temp[20];
	while (!infile.eof())
	{ 	
		infile.getline(temp, 20);
		int id = int(temp);
		infile.getline(temp, 20);
		string name = string(temp);
		double cgpa = atof(temp[20].c_str()); //char to double conversion
		student[index](id, name, cgpa); // constructor

		index++;
	}

	sortedlist.addStudents(student[index], index); //add student array to sortedlist





	system("PAUSE");
	return 0;
}
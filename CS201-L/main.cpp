#include <iostream>
#include <string>
#include <fstream>
#include "Instructor.h"
#include "Course.h"
#include "Person.h"
#include "Student.h"

using namespace std;

int main(){
	

	int numberOfStudents;
	
	char charInfo[20];
	ifstream myFile;
	string tempStr;

	Student students[20];
	Instructor professor;
	Course course;

	myFile.open("course.txt");

	while (!myFile.eof()){

		myFile.getline(charInfo, 20);
		tempStr = string(charInfo);
		course.setCourseName(tempStr);

		myFile.getline(charInfo, 20);
		tempStr = string(charInfo);
		course.setCourseID(tempStr);

		myFile.getline(charInfo, 20);
		tempStr = string(charInfo);
		course.setNumberOfStudents(tempStr);
	}

	ifstream infile;

	infile.open("instructor.txt");
	while (!infile.eof()){
		infile.getline(charInfo, 20);
		tempStr = string(charInfo);
		professor.setName(tempStr);
		
		infile.getline(charInfo, 20);
		tempStr = string(charInfo);
		professor.setDOB(tempStr);

		infile.getline(charInfo, 20);
		tempStr = string(charInfo);
		professor.setOffice(tempStr);

		infile.getline(charInfo, 20);
		tempStr = string(charInfo);
		professor.setDesignation(tempStr);
	}
	
	ifstream studentFile;
	int k = 0;

	while (!studentFile.eof()){
		
		studentFile.getline(charInfo, 20);
		tempStr = string(charInfo);
		students[k].setName(tempStr);

		studentFile.getline(charInfo, 20);
		tempStr = string(charInfo);
		students[k].setID(tempStr);

		studentFile.getline(charInfo, 20);
		tempStr = string(charInfo);
		students[k].setDOB(tempStr);

		studentFile.getline(charInfo, 20);
		tempStr = string(charInfo);
		students[k].CGPA(tempStr);

		
		numberOfStudents += 1;
		k += 1;
	}

	


	return 0;
}

void Person::setName(string n){
	name = n;
}
void Person::setDOB(string dob){
	DOB = dob;
}

void Student::setID(string id){
	ID = id;
}
void Student::setCGPA(string cgpa){
	CGPA = cgpa;
}

void Instructor::setOffice(string off_num){
	office = off_num;
}
void Instructor::setDesignation(string des){
	designation = des;
}
void Course::setCourseName(string course_name){
	courseName = course_name;
	
}
void Course::setCourseID(string course_id){
	courseID = course_id;
}
void Course::setNumberOfStudents(string nums){
	numberOfStudents = nums;
}

#ifndef COURSE_
#define COURSE_

#include <iostream>
#include <string>

using namespace std;

class Course {
public:
	//constructor
	Course(string ID, string name, Student studentList[], Instructor instructor)
	{
		courseID = "";
		courseName = "";
		studentList = {};
		instructor();
	}
	~Course(); // destructor
	void setCourseName(string course_name);
	void setCourseID(string course_id);
	void setNumberOfStudents (string nums);
	
private:
	string courseID;
	string courseName;
	Student studentList[];
	Instructor instructor;
	string numberOfStudents;
	
};

#endif
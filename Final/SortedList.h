#ifndef SORTEDLIST_
#define SORTEDLIST_

#include <iostream>


using namespace std;

class SortedList
{


public:
	SortedList();
	SortedList(int size);
	Student* getSortedItems();
	int getNumOfStudents();
	void addStudents(Students students[]; int size);
	void remove(int index);
	Student searchById(int id);
	
private:
	Student m_list[];
	int m_size;
	int m_numOfStudents;
	void sort();
	void increaseSize();
}



#endif
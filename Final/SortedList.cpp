#include <iostream>
#include "SortedList.h"
#include "Student.h"


using namespace std;

SortedList::SortedList()
{
	Student m_list[5];
	
}

SortedList::SortedList (int size)
{
	m_size = size;
	
}

Student* SortedList::getSortedItems()
{
	//use iterator here
}

int SortedList::getNumOfStudents()
{
	return m_numOfStudents;
}

void addStudents(Student students[], int size)
{
	//if the size of the sorted list is not big enough to handle the array 
	//passed in, then call the increase size function. 
	// Then 
	if (getNumOfStudents() == size)
	{
		increaseSize();
	}
	
	for (int i = 0; i < size; i++)
	{
		m_list[i] = student[i];
	}
	m_numOfStudents = size;
	
	sort();
}

void SortedList::increaseSize()
{
	m_size += 5;
	Student* d_array = new Student[m_size];
	for (int i = 0; i < getNumOfStudents(); i++)
	{
		d_array[i] = students[i];
	}
	delete [] students;
	
	for (int i = 0; i < getNumOfStudents(); i++)
	{
		students[i] = d_array[i];
	}
	delete [] d_array;

}

void SortedList::sort()
{
    int temp;
    for (int x = 0; x < size; x++)
    {
        for(int i = 0;i < size-1 - x; i++)
        {
            int j = i + 1;
            if (intArray[i] > intArray[j])
            {
  
                temp = intArray[i];
                intArray[i] = intArray[j];
                intArray[j] = temp;
                for (int k = 0; k < size; k++)
                {
                    cout << intArray[k] << " ";
                }
                cout << endl;
                
            }
        }
    }
    
}


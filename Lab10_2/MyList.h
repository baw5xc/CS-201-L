#ifndef MYLIST_
#define MYLIST_

#include <iostream>
#include <string>

using namespace std;

template <typename T>
class MyList
{
public:
	MyList();
	MyList(int size);
	void Add(const T item);
	void Remove(int index);
	T Get(int index);
	void IncreaseSize(); // this one should be private

private:
	int m_size;
	int numOfItems;
	T* m_list;
};

#endif

template <typename T>
MyList<T>::MyList(){} // Have the default constructor initialize the private variables with some default value.


template <typename T>
MyList<T>::MyList(int size)
{
	m_size = size;
	m_list = new T [m_size];
	numOfItems = 0;
}

template <typename T>
void MyList<T>::Add(const T item)
{
	if (numOfItems == m_size)
	{
		IncreaseSize();
	}
	m_list[numOfItems] = item;
	numOfItems++;
}

template <typename T>
void MyList<T>::Remove(int index)
{
	for (int i = index; i+1 == numOfItems; i++)
	{
		m_list[i] = m_list[i+1];
	}
	numOfItems -= 1;
}
template <typename T>
T MyList<T>::Get(int index)
{
	return m_list[index];
}


template <typename T>
void MyList<T>::IncreaseSize()
{
	// you have to recreate the m_list with extended size.
	// 1. take a temp array and put the existing m_list items there.(use loop)
	// 2. delete the  m_list
	m_size += 5;  // 3.
	// 4. again create m_list with increased m_size
	// 5. copy back the items from temp to m_list.(use loop)
}
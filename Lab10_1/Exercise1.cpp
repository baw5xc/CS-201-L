

#include <iostream>
#include <string>
#include "Money.h"
#include <list>
#include <fstream>


using namespace std;

template<typename T>
T add (T item1, T item2)
{
	return item1 + item2;
}

int main()
{
	cout << "Warm-up" << endl;
	cout << "---------" << endl;

	int v1 = 10;
	int v2 = 20;

	int sum = add<int>(v1, v2);

	cout << "The sum of v1 and v2 is equal to " << sum << endl;



	Money m1(32.00);
	Money m2(64.00);

	Money m3 = m1 + m2;

	cout << "this is the sum of my two money objects using the overloaded '+' operator: " << m3.getValue() << endl;
	cout << endl << endl;

	cout << "Exercise 1: Sorting" << endl;
	cout << "--------------------" << endl;

	ifstream inFile;
	inFile.open("numbers.txt");
	int temp;
	list<int>numberlist;
	while (inFile >> temp)
	{
		numberlist.push_back(temp);
	}

	numberlist.sort();
	list<int>::iterator it;
	for (it = numberlist.begin(); it != numberlist.end(); ++it)
    {
		cout << ' ' << *it;
	}
	cout << endl;

	inFile.close();







	system("PAUSE");
	return 0;
}
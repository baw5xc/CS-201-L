#include "Item.h"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;


int main()
{
//--------Task 1---------------------
	cout << "Task 1: " << endl;
	Item item1("Apple", 1.29);
	cout << item1;
//--------Task 2---------------------
	cout << endl;
	cout << "Task 2: " << endl;

	Item items[6];
	for (int i = 0; i < 6; i++)
	{
	items[i];
	}
	
	ifstream infile("items.txt");
	int i = 0;
	while(!infile.eof())
	{
		infile >> items[i];
		cout << items[i];
		i++;
	}

	
//-----------------------------------
	system("PAUSE");
	return 0;
}
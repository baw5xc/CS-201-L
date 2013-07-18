#include <iostream>
#include <string>
#include "MyList.h"

using namespace std;

int main()
{
	cout << "Lab 10: Exercise 2 " << endl;
	cout << "-------------------" << endl;
	MyList<string>names(5);

	names.Add("jack");
	names.Add("mary");
	names.Add("john");
	names.Add("robert");
	names.Add("catherine");


	cout << names.Get(4) << endl;

	names.Remove(3);
	cout << names.Get(3) << endl;


	system("PAUSE");
	return 0;
}
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("numbers(1).txt");
	int size;
	inFile >> size;
	int* d_array = new int[size];
	for (int i = 0; i < size; i ++)
	{
		inFile >> d_array[i];
		cout << ", ";
		cout << d_array[i];
	}
	cout << endl;
	cout << "Search for a number: ";
	int nums;
	cin >> nums;
	for (int k = 0; k <= size; k ++)
	{
		if (nums == d_array[k])
		{
			cout << "Your number was found at index " << k << ".";
			break;
		}
		else if (k == size)
		{
			cout << "Your number was not found." << endl;
		}
	}

	cout << endl;
	delete [] d_array;
	system("PAUSE");
	return 0;
}
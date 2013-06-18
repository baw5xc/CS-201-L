#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ofstream outfile;
	cout << "Please enter a number. ";
	int number;
	cin >> number;
	outfile.open("numbers.txt");
	for (int i = 0; i <= number; i++)
	{
		cout << i << " ";
	}


	outfile.close();

	return 0;
}
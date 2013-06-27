#include <iostream>
#include <string>

using namespace std;

int pointerSum (int *ptr1,  int *ptr2)
{
	return *ptr1 + *ptr2;
}

int referenceSum (int &num1, int &num2)
{
	return num1 + num2;
}


int main()
{
	int a;
	int b;
	int sum;
	int *ptr1 = &a;
	int *ptr2 = &b;

	cout << "Please enter a number ";
	cin >> a;
	cout << endl;
	cout << "Please enter another number. ";
	cin >> b;

	sum = pointerSum(ptr1, ptr2);
	cout << sum;
	cout << endl;

	sum = referenceSum(*ptr1, *ptr2);
	cout << sum;
	cout << endl;
	system("PAUSE");


	return 0;
}
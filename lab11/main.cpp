#include <iostream>

using namespace std;

void printMultiples(int givenNum, int multiplier)
{
	if(multiplier != 1)
	{
		printMultiples(givenNum, multiplier-1);
		cout << givenNum*multiplier << " ";
		
	}
	else
	{
		cout << givenNum << endl;
	}

}


double factorial(double number)
{
	if(number == 1)
	{
		cout << number;
		return ( 1 );
	}
	else 
	{
		double temp = number * factorial(number - 1);
		cout << " * " << number;
		return ( temp );
	}

}

double reverseFact(double nums)
{
	if (nums == 1)
	{
		cout << nums << " ";
		return 1;
	}
	else 
	{
		cout << nums << " * ";
		double temp = nums * reverseFact(nums - 1);
		return temp;
	}
	
}



int main()
{

	printMultiples(12, 10);
	cout << endl;

	double fact = factorial(7);
	cout << " = " << fact;
	cout << endl;
	cout << endl;
	double factRev = reverseFact(7);
	cout << " = " << factRev;
	cout << endl;
	system("PAUSE");
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

string name;
void myMethod(){
	cout << "Please enter your name. ";
	cin >> name;
}
int main(){
	myMethod();
	cout << "Hello " << name << "!" << endl;
	system("PAUSE");

	return 0;
}
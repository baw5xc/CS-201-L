#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string studentInfo[20][3];

int main(){

	ifstream myfile;
	myfile.open("student.txt");
	for(int i = 0; i < 20; i++){
		for (int j = 0; j < 3; j ++){
			myfile >> studentInfo[i][j];
		}
	}

	myfile.close();

	return 0;
}
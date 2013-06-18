#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

string ConcatName( string firstName, string lastName){
	 
	return firstName + " " + lastName;
}

// function that deals with input for three names
string ConcatName( string firstName, string middleName, string lastName){

	return firstName + " " + middleName + " " lastName;
}

// function that deals with an arbitrary sized name
string Concatname( string []){
	string name;
	int namelength = sizeof(name); 
	// for loop that iterates through character array and concatenates to var
	for (int i = 0; i <= namelength; i++)
     {
           name += " " + name[i];
     }
     return name;

}

int main(){
	/*
	main program where overloaded functions would be used
	*/

	return 0;

}
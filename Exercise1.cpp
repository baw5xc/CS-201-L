#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <LibraryBook.h>

using namespace std;

int main () 
{
	LibraryBook bookArray[20];
	char charArray[100];
	ifstream fin("books(1).txt");
	fin.getline(bookArray, 100);
	int counter = 0;

	while (!fin.eof()){
		string title, author, ISBN;
		fin.getline(charArray, 100);
		title = string(charArray);
		bookArray[counter].setTitle(title);

		fin.getline(charArray, 100);
		author = string(charArray);
		bookArray[counter].setAuthor(author);
		
		fin.getline(charArray, 100);
		ISBN = string(charArray);
		bookArray[counter].setISBN(ISBN);

		counter++;
	}// end while
	ifstream file("isbn(1).txt");
	while (!file.eof()){
		file.getline(charArray, 100);
		if (LibraryBook.isCheckedOut(string(charArray))){


		}

		else if (LibraryBook.isCheckedOut(string(charArray))){

		}
	}
	ofstream outFile;
	outFile.open("checkedout.txt");
	cout << "Title "

	system("PAUSE");
	return 0;
}

void LibraryBook::setTitle(string title){
		LibraryBook::title = title;
	}

	void LibraryBook::setAuthor(string author){
		LibraryBook::author = author;
	}

	void LibraryBook::setISBN(string ISBN){
		libraryBook::ISBN = ISBN;
	}

	string LibraryBook::getTitle(){
		return LibraryBook::title;
	}

	bool checkOut(){
		LibraryBook::checkout = true;
	}

	void checkIn(){
		LibaryBook::checkOut = false;
	}


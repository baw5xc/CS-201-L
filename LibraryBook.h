#ifndef LibraryBook
#define LibraryBook

#include string

class LibraryBook {

public:

	void setTitle(title);
	void setAuthor(author);
	void setISBN(ISBN);
	string getTitle();
	string getAuthor();
	string getISBN();
	void checkIn();
	void checkOut();


private:
	string title();
	string author();
	string ISBN();
	bool isCheckedOut();
};

#endif
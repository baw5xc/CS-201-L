#ifndef FOLDER_
#define FOLDER_

#include <iostream>
#include <string>

using namespace std;

class Folder 
{
public:
	Folder();
	void Setup( const string &name, Folder *ptrParentFolder);
	Folder *getParentFolder();
	string getName();

private:
	string m_name;
	Folder *m_ptrParentFolder;

};






#endif
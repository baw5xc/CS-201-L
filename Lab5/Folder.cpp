#include <iostream>
#include <string>
#include "Folder.h"

using namespace std;

Folder::Folder()
{
	string m_name;
	m_ptrParentFolder = NULL;
}

void Folder::Setup( const string &name, Folder *ptrParentFolder)
{
	m_name = name;
	m_ptrParentFolder = ptrParentFolder;
}

string Folder::getName()
{
	return m_name;
}

Folder *Folder::getParentFolder()
{
	return m_ptrParentFolder;
}
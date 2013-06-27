#include <iostream>
#include <string>
#include "Folder.h"

using namespace std;

int main()
{
	static Folder folders[7];

	folders[0].Setup("root", NULL);
	folders[1].Setup("Folder A", &folders[0]);
	folders[2].Setup("Folder B", &folders[0]);
	folders[3].Setup("Folder A-A", &folders[1]);
	folders[4].Setup("Folder B-A", &folders[2]);
	folders[5].Setup("Folder B-B", &folders[2]);
	folders[6].Setup("Folder A-A-A", &folders[3]);

	cout << "-----------------------------------------------\n";
	for (int i = 0; i < 7; i++)
	{
		cout << i << ": " << folders[i].getName() << endl;

	}
	cout << "7: quit" << endl;
	cout << "Which folder do you want to view the path of. ";
	int choice;
	cin >> choice;

	Folder *currentFolder = &folders[choice];

	while (currentFolder != NULL || choice == 7)
	{
		cout << currentFolder->getName() << " < ";
		currentFolder = currentFolder->getParentFolder();
	}
	if (choice == 7)
	{
		cout << "Goodbye" << endl;
	}

	cout << endl;
	cout << "-----------------------------------------------\n";
	system ("PAUSE");
	return 0;
}
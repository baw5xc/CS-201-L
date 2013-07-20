#include "Item.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	Item items[6];
	items[0].setName("Laptop");
	items[0].setPrice(1250.00);

	items[1].setName("Printer");
	items[1].setPrice(499.99);

	items[2].setName("Desktop");
	items[2].setPrice(399.99);

	items[3].setName("Monitor");
	items[3].setPrice(125.00);

	items[4].setName("Keyboard");
	items[4].setPrice(45.00);

	items[5].setName("Mouse");
	items[5].setPrice(12.99);

	for (int i = 0; i < 6; i++)
	{	
		cout << "Item: #" << setw(7) <<"Name" << setw(11) << "Price" << endl;
		cout << setw(7) << i+1 << setw(10) << items[i].getName() << setw(10) << "$" items[i].getPrice() << endl << endl;
		
	}

	Item* userSelection = new Item[itemsPurch+1]; // itemsPurch isn't defined yet!
	cout << endl << endl;
	int selection;
	double total = 0;
	int itemsPurch = 0;
	string finish = "no";
	while (finish == "no")
	{
		cout << "Choose your selection" << endl;
		cout << "User input: ";
		cin >> selection;
		cout << "You chose " << items[selection-1].getName() << " for $" << items[selection-1].getPrice() << "." << endl;
		cout << "Is this correct? (yes/no) ";
		string answer;
		cin >> answer;
		if (answer == "yes")
		{	
			userSelection[itemsPurch] = (items[selection-1].getName(), items[selection-1].getPrice());
			string buffer;
			itemsPurch += 1;
			Item* newUserArray = new Item[itemsPurch + 2];      // creating new array of size greater than the original array that stored data
			for (int i = 0; i < itemsPurch + 1; i++)
			{
				newUserArray[i] = userSelection[i];		//Comment: at last iteration, this  line will generate an error.
			}
			newUserArray[itemsPurch + 1] = items[selection -1]; // stores new data into the LAST element of the newly defined array
			userSelection = newUserArray;                       // puts the newly defined array BACK into the original array we used to store the data
			total += items[selection - 1].getPrice();
			cout << "Are you done? (yes/no) ";
			cin >> buffer;
			if (buffer == "yes")
			{
				finish = buffer;
			}
		
			

		
	
		cout << "Items Purchased: " << itemsPurch << endl;
		cout << "          Total: $" << total << endl << endl;
	}
	for (int i = 0; i < itemsPurch; i++)
		{
			cout << userSelection[i].getName() << endl;
			cout << userSelection[i].getPrice() << endl;
		}
	system("PAUSE");
	return 0;
}
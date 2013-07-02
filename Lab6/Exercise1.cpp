#include <iostream>
#include <string>
#include "Animal.h"
#include "Human.h"
#include "Bird.h"
#include "Dog.h"
#include <fstream>
#include <cstdlib>

using namespace std;

bool toBool(string x);

void LoadHumans()
{
	Human human[3];
	
	char charArray[20];
	string temp[20];
	ifstream myFile;
	myFile.open("humans.txt");
	while (!myFile.eof())
	{	

		int i = 0;
		myFile.getline(charArray, 20);
		temp[i] = string(charArray);
		i++;

		myFile.getline(charArray, 20);
		temp[i] = string(charArray);
		i++;

		myFile.getline(charArray, 3);
		temp[i] = string(charArray);
		i++;

		myFile.getline(charArray, 5);
		temp[i] = string(charArray);
		i++;
		
		double conversion1 = atof(temp[2].c_str());
		double conversion2 = atof(temp[3].c_str());
		human[0].Setup(temp[0], temp[1], conversion1, conversion2);
	//-------------------------------------
		myFile.getline(charArray, 20);
		temp[i] = string(charArray);
		i++;

		myFile.getline(charArray, 20);
		temp[i] = string(charArray);
		i++;

		myFile.getline(charArray, 3);
		temp[i] = string(charArray);
		i++;

		myFile.getline(charArray, 5);
		temp[i] = string(charArray);
		i++;
		
		conversion1 = atof(temp[6].c_str());
		conversion2 = atof(temp[7].c_str());
		human[1].Setup(temp[4], temp[5], conversion1, conversion2);
		//----------------------------------------
		myFile.getline(charArray, 20);
		temp[i] = string(charArray);
		i++;

		myFile.getline(charArray, 20);
		temp[i] = string(charArray);
		i++;

		myFile.getline(charArray, 3);
		temp[i] = string(charArray);
		i++;

		myFile.getline(charArray, 5);
		temp[i] = string(charArray);
		i++;
		
		string conversion = temp[2];
		conversion1 = atof(temp[10].c_str());
		conversion2 = atof(temp[11].c_str());
		human[2].Setup(temp[8], temp[9], conversion1, conversion2);
			
		

	}

}
void LoadBirds()
{
	Bird bird[3];
	char charArray[20];
	string temp[5];
	ifstream inFile;
	inFile.open("birds.txt");
	while (!inFile.eof())
	{
		for (int k = 0; k < 5; k++)
		{
			inFile.getline(charArray, 10);
			temp[k] = string(charArray);
		}


		double conversion1 = atof(temp[3].c_str());
		double conversion2 = atof(temp[4].c_str());

		
		bool var = toBool(temp[1]);
		bird[0].Setup(temp[0], var, temp[2], conversion1, conversion2);

		for (int k = 0; k < 5; k++)
		{
			inFile.getline(charArray, 10);
			temp[k] = string(charArray);
		}

		var = toBool(temp[1]);
		conversion1 = atof(temp[3].c_str());
		conversion2 = atof(temp[4].c_str());
		bird[2].Setup(temp[0], var, temp[3], conversion1, conversion2);

		for (int k = 0; k < 5; k++)
		{
			inFile.getline(charArray, 10);
			temp[k] = string(charArray);
		}

		var = toBool(temp[1]);
		conversion1 = atof(temp[3].c_str());
		conversion2 = atof(temp[4].c_str());
		bird[2].Setup(temp[0], var, temp[3], conversion1, conversion2);

	}



}
void LoadDogs()
{
	Dog dog[3];
	char charArray[20];
	string temp[20];
	ifstream inFile;
	inFile.open("dogs.txt");
	while (!inFile.eof())
	{
		for (int k = 0; k < 4; k++)
		{
			inFile.getline(charArray, 10);
			temp[k] = string(charArray);
		}

		double conversion1 = atof(temp[2].c_str());
		double conversion2 = atof(temp[3].c_str());
		double conversion3 = atof(temp[3].c_str());
		dog[0].Setup(temp[0], conversion1, conversion2, conversion3);

		for (int k = 0; k < 4; k++)
		{
			inFile.getline(charArray, 10);
			temp[k] = string(charArray);
		}

		conversion1 = atof(temp[2].c_str());
		conversion2 = atof(temp[2].c_str());
		conversion3 = atof(temp[2].c_str());

		dog[1].Setup(temp[0], conversion1, conversion2, conversion3);;

		for (int k = 0; k < 4; k++)
		{
			inFile.getline(charArray, 10);
			temp[k] = string(charArray);
		}

		conversion1 = atof(temp[2].c_str());
		conversion2 = atof(temp[2].c_str());
		conversion3 = atof(temp[2].c_str());

		dog[2].Setup(temp[0], conversion1, conversion2, conversion3);

	}

}

bool toBool (string x)
{
	bool value;
	if(x == "1")
	{
		value = true;
	}
	else if(x == "0")
	{
		value = false;
	}
	return value;
}
int main()
{
	LoadHumans();
	LoadDogs();
	LoadBirds();
	
	system("PAUSE");
	return 0;
}

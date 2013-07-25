//  main.cpp
//  Lab12
//
//  Created by brad waier on 7/24/13.
//  Copyright (c) 2013 brad waier. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;


void BubbleSort(int intArray[], int size)
{
    
    int temp;
    for (int x = 0; x < size; x++)
    {
        for(int i = 0;i < size-1 - x; i++)
        {
            int j = i + 1;
            if (intArray[i] > intArray[j])
            {
                cout << intArray[i] << " > " << intArray[j] << endl;
                temp = intArray[i];
                intArray[i] = intArray[j];
                intArray[j] = temp;
                for (int k = 0; k < size; k++)
                {
                    cout << intArray[k] << " ";
                }
                cout << endl;
                
            }
        }
    }
    
}
int main()
{
 
	ifstream infile;
	infile.open("numbers.txt");
	int arrayNums[30];
	int index = 0;
	int temp;
	while(infile >> temp)
	{
		arrayNums[index] = temp;
		index++;
	}
	
    BubbleSort(arrayNums, index);

	infile.close();
    system("PAUSE");
    return 0;
}


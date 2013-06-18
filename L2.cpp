#include <iostream>
#include <time.h>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int random = rand() % 10;
	cout << "Guess a number between 0 and 10. ";
	int guess;
	cin >> guess;

	if (random == guess)
	{
		cout << "Congratulations, you win." << endl;
	}
	else if (random != guess)
	{
		cout << "Sorry, the random number was " << random <<". You lose." << endl;
	}

	system("PAUSE");

	return 0;
}

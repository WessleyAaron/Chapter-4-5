//Guessing Game
//4-10-18
//Author: Aaron Wessley

#include <iostream>
#include <time.h>
#include <random>


int main()
{
	int numChoice;
	int secret;
	// initialize random seed
	srand(time(NULL));
	// generate secret number between 1 and 10
	secret = rand() % 10 + 1;

	std::cout << "Please pick a number between 1-10" << std::endl;
	std::cin >> numChoice;

	if (numChoice == secret)
	{
		std::cout << "Congratulations. You guessed " << secret << " correctly" << std::endl;
	}

	else
	{
		std::cout << "You chose ... poorly. The number was " << secret << std::endl;
	}

	system("pause");
	return 0;
}
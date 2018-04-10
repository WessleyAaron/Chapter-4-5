//Random Number With Score
// 4-10-18
//Author: Aaron Wessley

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numChoice;
	int secret;
	int count = 1;

	srand(time(NULL));

	secret = rand() % 100 + 1;

	do
	{
		std::cout << "Please pick a number between 1-100" << std::endl;
		std::cin >> numChoice;

		if (numChoice > secret)
		{
			std::cout << "The number you have chosen is too high. Guess again loser" << std::endl;
			count = count + 1;
			//count++
		}

		else if (numChoice < secret)
		{
			std::cout << "The number you have chosen is too low. Guess again loser" << std::endl;
			count = count + 1;
		}

	}

	while (numChoice != secret);

	std::cout << "Congratulations. You're not a loser. It took you " << count << " tries" << std::endl;

	system("pause");
	return 0;
}
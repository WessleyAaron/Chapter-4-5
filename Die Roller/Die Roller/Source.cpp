//Die Roller
//4-16-18
//Aaron Wessley

#include <iostream>
#include <string>
#include <time.h>
#include <random>
#include <iomanip>

typedef std::string newString;
int rolledNumber;

int randomNumber()
{
	srand(time(NULL));
	int rolledNumber = rand() % 6 + 1;
	return rolledNumber;
}

int main()
{
	newString userChoice;
	double userCash, bettingAmount;

	std::cout << "[1] 0.5x multiplier\n[2] 1x multiplier\n[3] 2x multiplier\n[4] Lose all\n[5] Lose all\n[6] 3x multiplier" << std::endl;
	std::cout << "How much cash do you have?" << std::endl;
	std::cin >> userCash;

	do
	{

		std::cout << std::fixed << std::showpoint;
		std::cout << std::setprecision(2);

		std::cout << "How much would you like to bet?" << std::endl;
		std::cin >> bettingAmount;

		if (bettingAmount > userCash)
		{
			return 0;
		}

		else
		{
			double newRolledNumber = randomNumber();

			if (newRolledNumber == 1)
			{
				userCash = userCash - bettingAmount + (bettingAmount * 0.5);
				std::cout << "You won $" << (bettingAmount * 0.5) << std::endl;
				std::cout << "You currently have $" << userCash << std::endl;
			}

			else if (newRolledNumber == 2)
			{
				userCash = userCash - bettingAmount + (bettingAmount * 1);
				std::cout << "You got your money back" << std::endl;
				std::cout << "You currently have $" << userCash << std::endl;
			}

			else if (newRolledNumber == 3)
			{
				userCash = userCash - bettingAmount + (bettingAmount * 2);
				std::cout << "You won $" << (bettingAmount * 2) << std::endl;
				std::cout << "You currently have $" << userCash << std::endl;
			}

			else if (newRolledNumber == 4)
			{
				userCash = userCash - bettingAmount;
				std::cout << "You lost $" << (bettingAmount) << std::endl;
				std::cout << "You currently have $" << userCash << std::endl;
			}

			else if (newRolledNumber == 5)
			{
				userCash = userCash - bettingAmount;
				std::cout << "You lost $" << (bettingAmount) << std::endl;
				std::cout << "You currently have $" << userCash << std::endl;
			}

			else if (newRolledNumber == 6)
			{
				userCash = userCash - bettingAmount + (bettingAmount * 3);
				std::cout << "You won $" << (bettingAmount * 3) << std::endl;
				std::cout << "You currently have $" << userCash << std::endl;
			}
		}

		std::cout << "Would you like to bet again? [y|n]" << std::endl;
		std::cin >> userChoice;
	} while (userChoice == "Y" || userChoice == "y");

	std::cout << "Then get out" << std::endl;

	system("pause");
	return 0;
}
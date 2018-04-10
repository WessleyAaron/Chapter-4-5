//Door Prize
//4-10-18
//Author: Aaron Wessley

#include <iostream>


int main()
{
	int doorChoice;

	std::cout << "Please pick a door: 1, 2, or 3" << std::endl;
	std::cin >> doorChoice;

	if (doorChoice == 1)
	{
		std::cout << "The prize behind door " << doorChoice << " is a brand new car" << std::endl;
	}

	else if (doorChoice == 2)
	{
		std::cout << "The prize behind door " << doorChoice << " is a summer vacation" << std::endl;
	}

	else if (doorChoice == 3)
	{
		std::cout << "The prize behind door " << doorChoice << " is a pug" << std::endl;
	}

	else
	{
		std::cout << "Why did you type " << doorChoice << "? That is not an option" << std::endl;
	}

	system("pause");
	return 0;
}
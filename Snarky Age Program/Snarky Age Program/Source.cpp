//Snarky Age Program
//4-16-18
//Aaron Wessley

#include <iostream>


int main()
{
	double userAge = 0;

	std::cout << "Please enter your age" << std::endl;
	std::cin >> userAge;

	if (userAge = 5 || userAge == 6)
	{
		std::cout << "You're a little young to be using this" << std::endl;
	}

	else if (userAge == 7 || userAge == 8 || userAge == 9 || userAge == 10)
	{
		std::cout << "You should be playing outside" << std::endl;
	}

	else if (userAge = 11 || userAge == 12 || userAge == 13 || userAge == 14 || userAge == 15)
	{
		std::cout << "Do you have your homework done?" << std::endl;
	}

	else if (userAge == 16 || userAge == 17)
	{
		std::cout << "Go find a job" << std::endl;
	}

	else if (userAge == 18)
	{
		std::cout << "Are you going to college?" << std::endl;
	}

	std::cout << "Goodbye" << std::endl;

	system("pause");
	return 0;
}
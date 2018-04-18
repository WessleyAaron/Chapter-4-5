//Delgados Tacos 2
//4-11-18
//Aaron Wessley

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void printMenu()
{
	std::cout << "-------- Menu --------\nTaco\nBurrito\nEnchilada\nTostad\nChurro\nSurpreme Burrito\n"
	"Potato Olè\nQuesadilla\nGuacamole\nDrink" << std::endl;
}

int main()
{
	double tacoPrice = 0.99;
	double burritoPrice = 1.99;
	double drinkPrice = 0.99;
	double taxRate = 1.075;
	std::string userChoice;
	int done;
	double tacoNumber = 0, burritoNumber = 0, drinkNumber = 0, tacoTotal = 0, burritoTotal = 0, drinkTotal = 0, total = 0, totalWithTax = 0;

	printMenu();

	do
	{
		std::cout << "\nWelcome to Delgados Tacos. What item would you like to order?" << std::endl;
		std::cin >> userChoice;

		if (userChoice == "Tacos" || userChoice == "tacos" || userChoice == "Taco" || userChoice == "taco")
		{
			std::cout << "How many tacos would you like?" << std::endl;
			std::cin >> tacoNumber;
		}

		else if (userChoice == "burritos" || userChoice == "Burritos" || userChoice == "burrito" || userChoice ==  "Burrito")
		{
			std::cout << "How many burritos would you like?" << std::endl;
			std::cin >> burritoNumber;
		}

		else if (userChoice == "Drink" || userChoice == "drink" || userChoice == "Drinks" || userChoice == "drinks")
		{
			std::cout << "How many drinks would you like?" << std::endl;
			std::cin >> drinkNumber;
		}

		else
		{
			std::cout << "Not available" << std::endl;
		}

		tacoTotal = tacoNumber * tacoPrice;
		burritoTotal = burritoNumber * burritoPrice;
		drinkTotal = drinkNumber * drinkPrice;

		std::cout << "Would you like to order anything else?\n1 for Yes\n2 for No" << std::endl;
		std::cin >> done;
	}

	while (done != 2);

	total = tacoTotal + burritoTotal + drinkTotal;
	totalWithTax = total * taxRate;

	std::cout << std::fixed << std::showpoint;
	std::cout << std::setprecision(2);

	std::cout << "You ordered " << tacoNumber << " tacos, " << burritoNumber << " burritos, and " << drinkNumber << " drinks" << std::endl;
	std::cout << "Your total is $" << total << " before tax and $" << totalWithTax << " after tax" << std::endl;

	system("pause");
	return 0;
}
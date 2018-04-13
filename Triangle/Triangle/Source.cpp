//Triangle
//4-12-18
//Aaron Wessley

#include <iostream>
#include <string>
#include <math.h>

int main()
{
	double sideA, sideB, sideC, base, height, hypotenuse, area;
	std::string userInputSide, userInputTriangleShape;

	std::cout << "What triangle do you want to solve for? right, isosceles, or equilateral?" << std::endl;
	std::cin >> userInputTriangleShape;

	if (userInputTriangleShape == "right" || userInputTriangleShape == "Right")
	{
		std::cout << "Which side of the right triangle would you like to solve? A, B, or C?" << std::endl;
		std::cin >> userInputSide;

		if (userInputSide == "a" || userInputSide == "A")
		{
			std::cout << "You chose side " << userInputSide << ". What is the distance for side B?" << std::endl;
			std::cin >> sideB;

			std::cout << "What is the distance for side C?" << std::endl;
			std::cin >> sideC;

			sideA = sqrt((sideC * sideC) - (sideB * sideB));
			area = (sideA * sideB) / 2;

			std::cout << "The distance for side A is " << sideA << " and the area is " << area << std::endl;
		}

		else if (userInputSide == "b" || userInputSide == "B")
		{
			std::cout << "You chose side " << userInputSide << ". What is the distance for side A?" << std::endl;
			std::cin >> sideA;

			std::cout << "What is the distance for side C?" << std::endl;
			std::cin >> sideC;

			sideB = sqrt((sideC * sideC) - (sideA * sideA));
			area = (sideA * sideB) / 2;

			std::cout << "The distance for side B is " << sideB << " and the area is " << area << std::endl;
		}

		else if (userInputSide == "C" || userInputSide == "c")
		{
			std::cout << "You chose side " << userInputSide << ". What is the distance for side A?" << std::endl;
			std::cin >> sideA;

			std::cout << "What is the distance for side B?" << std::endl;
			std::cin >> sideB;

			sideC = sqrt((sideA * sideA) + (sideB * sideB));
			area = (sideA * sideB) / 2;

			std::cout << "The distance for side C is " << sideC << " and the area is " << area << std::endl;
		}
	}

	else if (userInputTriangleShape == "isosceles" || userInputTriangleShape == "Isosceles")
	{
		std::cout << "What is the distance of side A (the base)?" << std::endl;
		std::cin >> base;

		std::cout << "What is the distance of side B (the hypotenuse)?" << std::endl;
		std::cin >> hypotenuse;

		height = sqrt((hypotenuse * hypotenuse) - ((base * base) * .25));
		area = (base * height) / 2;
		//hypotenuse = side b
		//base = side a

		std::cout << "The height of the isosceles triangle is " << height << " and the area is " << area << std::endl;

	}

	else if (userInputTriangleShape == "equilateral" || userInputTriangleShape == "Equilateral")
	{
		std::cout << "What is the distance of the sides of the triangle?" << std::endl;
		std::cin >> base;
		
		area = (base * height) * .5; //math is wrong here
		height = ((sqrt(3)) * base) / 2;
		//hypotenuse = side a
		//base = side b

		std::cout << "The area of the triangle is " << area << " and the height is " << height << std::endl;
	}

	system("pause");
	return 0;
}
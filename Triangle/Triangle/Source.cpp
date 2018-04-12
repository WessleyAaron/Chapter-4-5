//Triangle
//4-12-18
//Aaron Wessley

#include <iostream>

int trianglePerimeter(double A, double B, double C)
{
	double perimeter;
	perimeter = (A + B + C);
	return perimeter;
}

int triangleArea(double height, double base)
{
	double area;
	area = (base * height) / 2;
	return area;
}

int trianglehypotenuse(double sideA, double sideB)
{
	double sideC;
	sideC = sqrt(sideA) + sqrt(sideB);
	return sideC;
}

int main()
{
	double lengthSideA = 0;
	double lengthSideB = 0;
	double lengthSideC = 0;
	double area, perimeter, hypotenuse, height;

	std::cout << "Enter the length of side A" << std::endl;
	std::cin >> lengthSideA;

	std::cout << "Enter the length of side B" << std::endl;
	std::cin >> lengthSideB;

	hypotenuse = sqrt(lengthSideA) + sqrt(lengthSideB);
	perimeter = trianglePerimeter(lengthSideA, lengthSideB, hypotenuse);
	area = (lengthSideA / 2);
	

	std::cout << "Hypotenuse: " << hypotenuse << std::endl;
	std::cout << "Perimeter: " << perimeter << std::endl;
	std::cout << "Area: " << area << std::endl;

	system("pause");
	return 0;
}
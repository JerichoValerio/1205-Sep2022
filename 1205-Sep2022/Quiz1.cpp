#include <iostream>

void Week2Quiz1()
{
	int celsius1 = 0;
	int celsius2 = 0;
	int celsius3 = 0;
	int fahr1 = 0;
	int fahr2 = 0;
	int fahr3 = 0;

	std::cout << "please enter 3 integer Fahrenheit values separated by a space" << std::endl;
	std::cin >> fahr1 >> fahr2 >> fahr3;

	// formula to convert F to C is C = (5/9)(F - 32)
	celsius1 = 5 * (fahr1 - 32) / 9;
	celsius2 = 5 * (fahr2 - 32) / 9;
	celsius3 = 5 * (fahr3 - 32) / 9;

	std::cout << "Calculated Celsius values are " << celsius1 << ", " << celsius2 << ", " << celsius3 << "\n";
}

void Week2Quiz1WithDouble()
{
	double celsius1 = 0;
	double celsius2 = 0;
	double celsius3 = 0;
	double fahr1 = 0;
	double fahr2 = 0;
	double fahr3 = 0;

	std::cout << "please enter 3 double Fahrenheit values separated by a space" << std::endl;
	std::cin >> fahr1 >> fahr2 >> fahr3;

	// formula to convert F to C is C = (5/9)(F - 32)
	celsius1 = 5 * (fahr1 - 32) / 9;
	celsius2 = 5 * (fahr2 - 32) / 9;
	celsius3 = 5 * (fahr3 - 32) / 9;

	std::cout << "Calculated Celsius values are " << celsius1 << ", " << celsius2 << ", " << celsius3 << "\n";
}
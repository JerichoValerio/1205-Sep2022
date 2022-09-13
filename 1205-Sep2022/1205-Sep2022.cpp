// 1205-Sep2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include "ArrayExample.h"
#include "Quiz1.h"

int main()
{

	BasicConditionals();

	BasicArrayExample();
	Week2Quiz1();
	Week2Quiz1WithDouble();

	// std is the standard library namespace
	// :: is the scope resolution 
	// << is a way of outputting data to the standard output 
	// \n is the new line character 
	std::cout << "Some text .. ";
	std::cout << "Hello World from C++ !\nSecond line\n";
	
	std::cout << "End" << "with" << "this line.\n";
	cout << "yet another line\n";

	// Boolean Type
	bool b1 = true;
	bool b2{ true };

	// Character Type
	char c = 'a';
	std::cout << "c=" << c << "\n";
	c = 'Z';

	std::cout << "size of c is:" << sizeof(c) << " bytes\n";
	
	char a = 97;
	std::cout << "a is => " << a << "\n";

	// Integer Types
	int x = 12;
	int y = 0xA;

	std::cout << "the value in x = " << x << " and y is " << y << "\n";

	// Floating point Types
	double d = 3.14;
	std::cout << "d is " << d << "\n";

	// Type Modifiers
	// Types can have modifiers
	// signed and unsigned 
	// int without a type modifier is is signed by default.
	unsigned int ua = 0;

	// Operators 
	int var1 = 5;
	int var2 = 8;

	int res = var1 + var2;
	var2 += 10; // same as var2 = var2 + 10;
	var2 /= 2;

	cout << "var2 is now: " << var2 << "\n";

	var1++; // post-increment
	++var1; // pre-increment

	var1--;
	--var1;

	// Standard input - cin is the standard input stream
	int var3 = 0;
	std::cout << "please enter an integer: ";
	std::cin >> var3;
	std::cout << "\nyou entered: " << var3 << "\n";

	std::cout << "please enter 2 integers separated by a space: ";
	int i1 = 0;
	int i2 = 0;
	std::cin >> i1 >> i2;

	std::cout << "you entered i1 = " << i1 << " i2 = " << i2 << "\n";

	char vc = 0;
	int vi = 0;
	double vd = 0.0;
	std::cout << "please enter a char, an integer and a double: ";
	std::cin >> vc >> vi >> vd;
	std::cout << "you entered: " << vc << ", " << vi << ", " << vd << "\n";

	return 0;
} 

void func1()
{

}

// Fundamental Types in C++
// Built-in types


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

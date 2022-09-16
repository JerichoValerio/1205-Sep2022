#include <iostream>

void Intro()
{
	// std is the standard library namespace
	// :: is the scope resolution 
	// << is a way of outputting data to the standard output 
	// \n is the new line character 

	std::cout << "Some text .. ";
	std::cout << "Hello World from C++ !\nSecond line\n";

	std::cout << "End" << "with" << "this line.\n";
	std::cout << "yet another line\n";

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

	std::cout << "var2 is now: " << var2 << "\n";

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
}
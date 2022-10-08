#include <iostream>

using namespace std;

void ExploreBitwiseBasics()
{
	unsigned int hexNumber1 = 0x0F;
	unsigned int hexNumber2 = 0x18;

	cout << "number1 in hex: " << hex << hexNumber1 << " and in dec: " << dec << hexNumber1 << endl;
	cout << "number2 in hex: " << hex << hexNumber2 << " and in dec: " << dec << hexNumber2 << endl;

	// Logical AND
	bool isiTTrue = (hexNumber1 > 0 && hexNumber2 > 0);

	/*
	* Example
	A	011 Bitwise AND
	B	111
		===
	R	011
	*/

	// bitwise AND operator
	unsigned int andResult = hexNumber1 & hexNumber2;
	cout << "bitwise AND result: " << andResult << endl;

	// bitwise OR operator
	andResult = hexNumber1 | hexNumber2;
	cout << "bitwise OR result: " << andResult << endl;

	// bitwise NOT operator
	andResult = ~hexNumber1;
	cout << "bitwise NOT result: " << andResult << endl;
}
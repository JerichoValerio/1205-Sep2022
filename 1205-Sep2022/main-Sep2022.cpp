// 1205-Sep2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include "Examples.h"
#include "Quizes.h"
#include <cstdlib>

void TestQuiz4()
{
	bool arr[3] = { false, false, true };
	InitializeArray(&arr[0], 3, true);
}

int main()
{
	TestStringType();
	// TestTypeConversion();
	// TestStrtok();

	//TestCString();

	//TestQuiz4();

	//int x = 10;
	//int y = 20;
	//std::cout << "x=" << x << " y=" << y << std::endl;
	//SwapCopies(x, y);
	//std::cout << "x=" << x << " y=" << y << std::endl;

	//Swap(&x, &y);
	//std::cout << "x=" << x << " y=" << y << std::endl;

	//ArrayAccessByPointer();

	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//InitializeArray(arr, 10);

	//int* newPtr = &arr[0];
	//InitializeArray(newPtr, 10);

	//bool arr2[3] = {};

	// BasicConditionals();
	// BasicArrayExample();
	// Week2Quiz1();
	// Week2Quiz1WithDouble();

	return 0;
} 



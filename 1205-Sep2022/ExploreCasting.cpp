#include <iostream>
using namespace std;

void TestStaticCast()
{
	// int by default is signed
	int largeNumber = 1000; // 0x000003e8
	unsigned int largeNumber2 = 20000000;

	// char by default is signed
	char smallNumber = largeNumber; // char can only hold 1 byte - 1 byte = [1111 1111] = 255
	unsigned char smallNumber2 = largeNumber;

	// smallNumber	0xe8 '�'	char
	// smallNumber2	0xe8 '�'	unsigned char

	char smallNumber3 = static_cast<char>(largeNumber);
}
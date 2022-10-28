#pragma once
#include <iostream>
using namespace std;

class PhoneNumber
{
private:
	int CountryCode;
	int AreaCode;
	int Number;
	int Internal;

public:
	PhoneNumber(int areaCode, int number);
	PhoneNumber(int countryCode, int areaCode, int number);
	PhoneNumber(int countryCode, int areaCode, int number, int internal);
};

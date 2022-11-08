#pragma once
#include <iostream>

using namespace std;

class Vehicle
{
protected:
	unsigned int m_numberOfWheels;

public:
	Vehicle();
	unsigned int GetNumberOfWheels();

};

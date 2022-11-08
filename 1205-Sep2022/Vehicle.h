#pragma once
#include <iostream>
#include "EngineType.h"

using namespace std;

class Vehicle
{
protected:
	unsigned int m_numberOfWheels;
	EngineType m_engineType;

public:
	Vehicle();
	~Vehicle();
	unsigned int GetNumberOfWheels();

};

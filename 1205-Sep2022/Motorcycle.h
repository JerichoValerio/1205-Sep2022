#pragma once
#include "Vehicle.h"

class Motorcycle : public Vehicle
{
public:
	Motorcycle();
	~Motorcycle();

	virtual unsigned int GetNumberOfWheels();
};
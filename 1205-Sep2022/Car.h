#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
public:
	Car();
	~Car();

	// a virtual method which can be overriden in derived classes
	virtual unsigned int GetNumberOfWheels();
};

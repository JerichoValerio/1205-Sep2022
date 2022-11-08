#include "Vehicle.h"

Vehicle::Vehicle() : m_numberOfWheels(0)
{
	cout << "Vehicle constructor" << " Num of wheels: " << m_numberOfWheels << endl;
}

unsigned int Vehicle::GetNumberOfWheels()
{
	return m_numberOfWheels;
}

Vehicle::~Vehicle()
{
	cout << "Vehicle destructor" << endl;
}
#include "Vehicle.h"

Vehicle::Vehicle() : m_numberOfWheels(0)
{
}

unsigned int Vehicle::GetNumberOfWheels()
{
	return m_numberOfWheels;
}
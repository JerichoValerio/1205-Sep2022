#include "Car.h"

Car::Car()
{
	m_numberOfWheels = 4;
	cout << "Car constructor" << " Num of wheels: " << m_numberOfWheels << endl;
}

Car::~Car()
{
	cout << "Car destructor" << endl;
}
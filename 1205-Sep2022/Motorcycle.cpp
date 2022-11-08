#include "Motorcycle.h"

Motorcycle::Motorcycle()
{
	m_numberOfWheels = 2;

	cout << "Motorcycle constructor" << " Num of wheels: " << m_numberOfWheels << endl;
}

Motorcycle::~Motorcycle()
{
	cout << "Motorcycle desstructor" << endl;
}

unsigned int Motorcycle::GetNumberOfWheels()
{
	return 2;
}
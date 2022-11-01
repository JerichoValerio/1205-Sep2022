#include "Employee.h"

Employee::Employee()
{
	HomeAddress = nullptr;
	ContactAddress = nullptr;
	HomeNumber = nullptr;
	CellNumber = nullptr;
}

Employee::Employee(int id, const string& firstName, const string& lastName)
{
	this->ID = id;
	this->FirstName = firstName;
	this->LastName = lastName;
}
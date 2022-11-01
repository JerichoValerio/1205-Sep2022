#pragma once
#include <iostream>
#include "Address.h"
#include "PhoneNumber.h"

using namespace std;

class Employee
{
private:
	int ID;
	string FirstName;
	string LastName;
	string Department;
	Address* HomeAddress;
	Address* ContactAddress;
	PhoneNumber* HomeNumber;
	PhoneNumber* CellNumber;
public:
	// this is the default constructor
	Employee();
	Employee(int id, const string& firstName, const string& lastName);
};
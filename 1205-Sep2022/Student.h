#pragma once
#include <iostream>
using namespace std;

class Student
{
private:
	string id;
	string name;
	string email;
	string phoneNumber;
	string program;

public:
	Student(string name, string email);
	Student(string id, string name, string email);
	string GetEmail();  
	string GetName();
	string GetId();

	void SetProgram(string program);  
};

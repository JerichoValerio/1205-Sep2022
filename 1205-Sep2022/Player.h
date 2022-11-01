#pragma once
#include <iostream>

using namespace std;

class Player
{
private:
	string m_username;
	string m_name;

public:
	Player(const string& username, const string& name);
	const string& GetName();
	const string& GetUsername();
	void SetName(const string& name);
};
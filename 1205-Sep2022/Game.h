#pragma once
#include <iostream>
#include "Player.h"

using namespace std;

class Game
{
private:
	bool RunGame();
	Player GetPlayerInformation();
	void WelcomePlayer(const string& name);

public:
	void StartGame();
};
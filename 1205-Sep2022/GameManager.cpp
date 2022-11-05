#include <iostream>
#include "GameManager.h"

using namespace std;

void GameManagement::WelcomePlayer(const string& name)
{
	cout << "Welcome back " << name << " !" << endl;
}

bool GameManagement::RunGame()
{
	GameManagement::GivePlayerOptions();
	string playerInput;
	GameManagement::GetPlayerInput(playerInput);

	bool shouldRunGame = EvaluatePlayerInput(playerInput) != PlayerOptions::Quit;
	// Check to see if the player wants to end it - hint: return

	// Run your game here


	// when the game ends
	return shouldRunGame;
}

void GameManagement::GivePlayerOptions()
{
	// assignment 10: 
	// provide the text that explains (lists) the options
	// ask user to enter the input
	cout << "test" << endl;
}

void GameManagement::GetPlayerInput(string& playerInput)
{
	cin >> playerInput;
}

PlayerOptions GameManagement::EvaluatePlayerInput(const string& input)
{
	// assignment 10: check the validity and return the appropriate enum value

	return PlayerOptions::Unknown;
}

Player GameManagement::GetPlayerInformation()
{
	// Get the Player username and player name from the console input
	// Create the player object and return it from the function
	
	// remove this line after adding your assignment
	Player player("fox72", "george");

	return player;
}

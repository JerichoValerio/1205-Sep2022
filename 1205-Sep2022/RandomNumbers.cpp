#include <ctime>
#include <iostream>

using namespace std;

void ExamineBasicRandomNumbers()
{
	// set the random number generation based on current time
	srand(time(NULL));
	// get a random number between 0 and 99
	unsigned int number = rand() % 100; // divide by 100 and get the remainder

	cout << "random number was:  " << number << endl;

	int const file = 100;

}
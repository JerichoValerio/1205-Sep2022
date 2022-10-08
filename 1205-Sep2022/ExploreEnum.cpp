#include <iostream>
using namespace std;

// enumerated list of colors
enum class Color
{
	Red,
	Green,
	Blue
};

enum class TrafficLight
{
	Red,
	Yellow,
	Green
};

enum OldColor
{
	Red,
	Green,
	Blue
};

void TestColorEnum()
{

	OldColor oldColor = Red;

	Color currentColor = Color::Red;

	if (currentColor == Color::Red)
	{
		cout << "currentColor is RED" << endl;
	}

	int RedColor = 1;
	int BlueColor = 2;
	int GreenColor = 3;

	int currentBasicColor = 0;

	if (currentBasicColor == RedColor)
	{
		cout << "currentBasicColor is RED" << endl;
	}


}

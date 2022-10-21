#include "Point.h"
#include <iostream>

using namespace std;

void TestPointObject()
{
	// constructor with no parameters called
	int i;
	Point p1, p2;  // instantiation of a class

	p1.Set(5, 7);
	p2.Set(0, 10);
	
	cout << "p1: " << p1.GetX() << ", " << p1.GetY() << endl;
	cout << "p2: " << p2.GetX() << ", " << p2.GetY() << endl;

	// constructor with 2 int parameters called
	Point p3(13, 89);

	// copy constructor called here
	Point p4 = p3;
}


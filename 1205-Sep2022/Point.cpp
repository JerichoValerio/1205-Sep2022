#include "Point.h"
int Point::GetX()
{
	return x;
}

int Point::GetY()
{
	return y;
}

void Point::Set(int x, int y)
{
	this->x = x;
	this->y = y;
}
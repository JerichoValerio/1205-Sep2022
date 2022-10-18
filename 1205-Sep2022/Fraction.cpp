#include "Fraction.h"

Fraction::Fraction()
{
}

Fraction::Fraction(int n)
{
}

Fraction::Fraction(int n, int d)
{
}

int Fraction::GetDen()
{
	return den;
}

int Fraction::GetNum()
{
	return num;
}

void Fraction::Set(int n, int d)
{
	this->num = n;
	this->den = d;
}

int Fraction::GreatestCommonFactor(int a, int b)
{
	if (b == 0)
	{
		return a;
	}

	return GreatestCommonFactor(b, a % b);
}

int Fraction::LowestCommonDenominator()
{
	return 0;
}
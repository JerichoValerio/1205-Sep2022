#include "Fraction.h"

Fraction::Fraction()
{
	num = 0;
	den = 0;
}

Fraction::Fraction(int n)
{
	num = n;
	den = 0;
}

Fraction::Fraction(int n, int d)
{
	num = n;
	den = d;
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
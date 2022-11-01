#pragma once

class Fraction
{
private:
	int num; // Numerator 
	int den; // denominator

public:
	Fraction();
	Fraction(int n);
	Fraction(int n, int d);

	void Set(int n, int d);
	int GetNum();
	int GetDen();

private:
	int GreatestCommonFactor(int a, int b);
	int LowestCommonDenominator();
};
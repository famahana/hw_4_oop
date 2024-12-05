#include "Fraction.h"
#include <iostream>
using namespace std;



Fraction::Fraction(double n, double d) :numerator(n), denominator(d)
{
}

void Fraction::setNumerator(double n)
{
	numerator = n;
}

void Fraction::setDenominator(double d)
{
	denominator = d;
}

void Fraction::showFraction()
{
	cout << numerator << "/" << denominator << ' ';
}

Fraction Fraction::add(Fraction& f)
{
	double n = numerator * f.denominator + f.numerator * denominator;
	double d = denominator * f.denominator;
	return Fraction(n,d);
}

Fraction Fraction::subtract(Fraction& f)
{
	double n = numerator * f.denominator - f.numerator * denominator;
	double d = denominator * f.denominator;
	return Fraction(n,d);
}

Fraction Fraction::multiplication(Fraction& f)
{
	double n = numerator * f.numerator;
	double d = denominator * f.denominator;
	return Fraction(n,d);
}

Fraction Fraction::division(Fraction& f)
{
	double n = numerator * f.denominator;
	double d = denominator * f.numerator;
	return Fraction(n,d);
}



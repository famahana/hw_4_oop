#pragma once
class Fraction
{
private:
	double numerator;
	double denominator;
public:
	Fraction(double n = 0,double d = 0);
	void setNumerator(double n);
	void setDenominator(double d);
	void showFraction();
	Fraction add(Fraction& f);
	Fraction subtract(Fraction& f);
	Fraction multiplication(Fraction& f);
	Fraction division(Fraction& f);

	

};


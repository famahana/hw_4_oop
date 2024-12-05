#include "Fraction.h"
#include <iostream>
using namespace std;

int main()
{
	Fraction fr1{ 5,3 };
	Fraction fr2{ 2,3 };
	cout << "Fraction 1: ";
	fr1.showFraction();
	cout << "Fraction 2: ";
	fr2.showFraction();
	Fraction result;
	result = fr1.add(fr2);
	cout << endl <<  "Add: ";
	result.showFraction();
	result = fr1.subtract(fr2);
	cout << endl <<  "Subtract: ";
	result.showFraction();
	result = fr1.multiplication(fr2);
	cout << endl << "Multiplication: ";
	result.showFraction();
	result = fr1.division(fr2);
	cout << endl << "Division: ";
	result.showFraction();



	return 0;
}
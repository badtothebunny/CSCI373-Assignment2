//Fraction class implementation section
//Programmer: Badtothebunny
#include "Fraction.h"

//Default constructor
Fraction::Fraction ()
{
	numerator = 0; //Set values to 0.
	denominator = 0;
}

//Assignment constructor
Fraction::Fraction(int num, int den)
{
	numerator = num;
	denominator = den;
}

//Copy constructor
Fraction::Fraction(const Fraction &other)
{
	numerator = other.numerator;
	denominator = other.denominator;
}

//Next are the getFunctions
int Fraction::getNumerator()const
{
	return numerator;
}

int Fraction::getDenominator()const
{
	return denominator;
} 

//setFunctions
void Fraction::setNumerator(int num)
{
	numerator = num;
}

void Fraction::setDenominator(int den)
{
	denominator = den;
}

//Operation overloaders
Fraction Fraction::operator+(const Fraction &add)
{
//When it comes to adding fractions, first check if the denominator is equal.
//If it's not, the numerators are multiplied by the other fraction's denominator.
	if (denominator != add.denominator)
		return Fraction((numerator * add.denominator)+(add.numerator * denominator),denominator * add.denominator);
	else
		return Fraction (numerator + add.numerator,denominator);
}

Fraction Fraction::operator-(const Fraction &sub)
{
//subtraction will use a similar method.
	if (denominator != sub.denominator)
		return Fraction((numerator * sub.denominator)-(sub.numerator * denominator),denominator * sub.denominator);
	else
		return Fraction (numerator - sub.numerator,denominator);	
}

Fraction Fraction::operator*(const Fraction &mul)
{
	return Fraction (numerator * mul.numerator, denominator * mul.denominator);
}

Fraction Fraction::operator/(const Fraction &div)
{
	return Fraction (numerator * div.denominator, denominator * div.numerator);
}

//Print function
void Fraction::print()const
{
	cout<<numerator<<"/"<<denominator<<endl;
}

//Simplify function
void Fraction::simplify()
{
	int gcd,num,den;
	num = numerator;
	den = denominator;
	if (num > den)
	{
		while (num % den != 0)
		{
			gcd = num % den;
			num = den;
			den = gcd;
		}
		numerator = numerator / den;
		denominator = denominator / den;
	}
	else
	{
		while (den % num != 0)
		{
			gcd = den % num;
			den = num;
			num = gcd;
		}
		numerator = numerator / num;
		denominator = denominator / num;
	}
}


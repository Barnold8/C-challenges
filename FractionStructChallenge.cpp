#include "pch.h"
#include <vector>
#include <iostream>
#include "MyHeader.h"
#include "constants.h"

//Create a struct to hold a fraction.
//The struct should have an integer numerator and an integer denominator member.
//Declare 2 fraction variables and read them in from the user.
//Write a function called multiply that takes both fractions, multiplies them together, and returns the result as a decimal number.
//You do not need to reduce the fraction to its lowest terms.Print the result of the multiplication of the 2 fraction variables.

struct fraction {

	int numer{};
	int denom{};

};

double multFraction(fraction f1, fraction f2) {

	return (static_cast<double>(f1.numer) / static_cast<double>(f1.denom) ) * (static_cast<double>(f2.numer) / static_cast<double>(f2.denom));

}

int main(){

	fraction first{ 1,2 };
	fraction second{ 1,4 };

	std::cout << multFraction(first, second);

	return 0;

}

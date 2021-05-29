#include "pch.h"
#include <vector>
#include <iostream>
#include "MyHeader.h"
#include <iomanip>
#include "constants.h"


//Write a program that asks the user to input an integer, and tells the user whether the number is even or odd.
//Write a function called isEven() that returns true if an integer passed to it is even, and false otherwise.
//Use the modulus operator to test whether the integer parameter is even.


bool isEven(int number) {

	
	return (number % 2 == 0);

}


int main()
{
	
	std::cout << std::boolalpha << isEven(10);


	return 0;

}

#include "pch.h"
#include <vector>
#include <iostream>
#include "MyHeader.h"
#include "constants.h"

//Write a function called calculate() that takes two integersand a char representing one of the following mathematical operations
// : +, -, *, / , or % (modulus).
// Use a switch statement to perform the appropriate mathematical operation on the integers, and return the result.
// If an invalid operator is passed into the function, the function should print an error.
// For the division operator, do an integer division.
//Hint : “operator” is a keyword, variables can’t be named “operator”.


int Calc(int x, int y, char oper) {

	switch (oper) {

		case '+':

			return x + y;

			break;

		case '/':

			return x / y;

			break;

		case '*':

			return x * y;

			break;

		case '-':

			return x - y;

			break;

		case '%':

			return x % y;

			break;
		

	default:
		std::cout << "No valid operator was chosen" << std::endl;
		return 1;
		break;
	}

}

int main()
{
	
	int x{ 10 };
	int y{ 15 };

	int a{ Calc(x, y, '+') };
	int b{ Calc(x, y, '-') };
	int c{ Calc(x, y, '/') };
	int d{ Calc(x, y, '*') };
	int e{ Calc(x, y, '%') };
	int f{ Calc(x, y, 'F') };

	int letter_arr[6] = { a,b,c,d,e,f };

	for (int i = 0; i < 6; i++) {
	
		std::cout << letter_arr[i] << std::endl;
	
	}


	return 0;

}

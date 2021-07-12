#include "pch.h"
#include <vector>
#include <iostream>
#include "Node.h"
#include "MyHeader.h"
#include "constants.h"
#include <string>

//
//1) A factorial of an integer N(written N!) is defined as the product(multiplication) of all the numbers between 1 and N(0!= 1).
// Write a recursive function called factorial that returns the factorial of the input.Test it with the first 7 factorials.
//
//Hint: Remember that(x * y) = (y * x), so the product of all the numbers between 1 and N is the same as the product of all the numbers between N and 1.

//2) Write a recursive function that takes an integer as input and returns the sum of each individual digit in the integer(e.g. 357 = 3 + 5 + 7 = 15).
//Print the answer for input 93427 (which is 25).Assume the input values are positive.

//3a) This one is slightly trickier.
//Write a program that asks the user to enter a positive integer, and then uses a recursive function to print out the binary representation for that number.
//Use method 1 from lesson O.4 --Converting between binary and decimal.

int factorial(int n){ //1a

	if (n <= 0) { return 1; }
	else {

		return factorial(n - 1) * n;
	}

}

int parts(int num) { //2a Needed help doing this one, had to look at solution, never took modulo into consideration. had an idea by dividing by 10 initally though

	if (num <= 10) { return 1; }
	else {
		return parts(num / 10) + (num % 10);
	}
		/*return parts(num / 10) + num ; }*/

}


void toBin(int decimal) { //3a. If the num is divisble by 2, its 1, else 0


	if (decimal == 0) { return; }
	else {
	
		toBin(decimal / 2);
		std::cout << decimal % 2;
	}

	
}

void unsignedToBin(unsigned int decimal) {

	if (decimal == 0) { return; }
	else {

		toBin(decimal / 2);
		std::cout << decimal % 2;
	}
}

int main() {

	std::cout << factorial(10)<< std::endl;
	std::cout << parts(93427) << std::endl;
	toBin(12); //1101
	std::cout << "\n";
	unsignedToBin(12 - 13);
}

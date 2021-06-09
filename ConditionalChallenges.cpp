#include "pch.h"
#include <vector>
#include <iostream>
#include "MyHeader.h"
#include "constants.h"


char* returnAlphabet() {

	char alpha[26]{};

	for (char a{ 'a' }; a <= 'z'; ++a) {

		std::cout << a;									//This is just leftover of me trying to make a function that returns a char array, the array being the alphabet
		alpha[static_cast<int>(a) - 97] = a;

	}

	return alpha;


}


int sumTo(int value) {

	int x{ 0 };

	for (int i{ 0 }; i <= value; ++i) {
	
		x += i;
	
	}
	return x;

}


int main()
{
	
	//Write a for loop that prints every even number from 0 to 20.
	
	int amount{ 20 };

	for (int i{ 0 }; i <= amount; ++i) {
	
		if (i % 2 == 0) { std::cout << i << std::endl; }

	}

	//Write a function named sumTo() that takes an integer parameter named value, and returns the sum of all the numbers from 1 to value.
	//For example, sumTo(5) should return 15, which is 1 + 2 + 3 + 4 + 5.

	std::cout << sumTo(5);

	return 0;

}

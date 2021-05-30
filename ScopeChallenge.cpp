#include "pch.h"
#include <vector>
#include <iostream>
#include "MyHeader.h"
#include <iomanip>
#include "constants.h"

//Write a program that asks the user to enter two integers, one named smaller, the other named larger.
//If the user enters a smaller value for the second integer, use a blockand a temporary variable to swap the smallerand larger values.
//Then print the values of the smallerand larger variables. Add comments to your code indicating where each variable dies.
//Note: When you print the values, smaller should hold the smaller input and larger the larger input, no matter which order they were entered in.
//
//The program output should match the following :
//
//Enter an integer : 4
//Enter a larger integer : 2
//Swapping the values
//The smaller value is 2
//The larger value is 4


int getInt() {

	int x{};

	std::cout << "Enter an integer: ";
	std::cin >> x;

	return x;
}//x dies here but its value is parsed into whatever variable holds its return value

void PrintSequence(int smaller, int larger) {


	std::cout << "The smaller value is " << smaller << std::endl;
	std::cout << "The larger value is " << larger << std::endl;

}//the local variables that are in the parameter section die here, they just share the same name of the variables I intend to pass through here

int main()
{

	int smaller{ getInt() };
	int larger{ getInt() };

	if (smaller > larger)
	{

		std::cout << "Swapping the values" << std::endl;

		int temp{larger};

		larger = smaller;
		smaller = temp;

	}//temp dies here

	PrintSequence(smaller, larger);


	return 0;

}//Smaller and larger die here

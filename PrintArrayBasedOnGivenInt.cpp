#include "pch.h"
#include <vector>
#include <iostream>
#include "Node.h"
#include "MyHeader.h"
#include "constants.h"


//Given the array in question 1:
//Ask the user for a number between 1 and 9. If the user does not enter a number between 1 and 9, repeatedly ask for an integer value until they do.
//Once they have entered a number between 1 and 9, print the array.Then search the array for the value that the user entered and print the index of that element.

//You can test std::cin for invalid input by using the following code :

// if the user entered something invalid
//if (std::cin.fail())
//{
//    std::cin.clear(); // reset any error flags
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer
//}

int askForInt() {

	int x{ 0 };
	bool failed{ false };

	std::cout << "Please enter an integer between 1-9\t";
	std::cin >> x;

	if (std::cin.fail()) {

		std::cin.clear(); // reset any error flags
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer
		x = askForInt();
	}
	else if (x <= 0 || x >= 10) {
		
		x = askForInt();

	}
	return x;
}


int main() {

	constexpr int arr[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
	int x{ askForInt() };
	
	std::cout << arr[x-1];


}

#include "pch.h"
#include <vector>
#include <iostream>
#include "Node.h"
#include "MyHeader.h"
#include "constants.h"
#include <string>
#include <iterator>
#include <cstddef>
#include <algorithm>

//Declare a fixed array with the following names
// : Alex, Betty, Caroline, Dave, Emily, Fred, Greg, and Holly. 
// Ask the user to enter a name.
// Use a for each loop to see if the name the user entered is in the array.
//Sample output :
//Enter a name : Betty
//Betty was found.
//Enter a name : Megatron
//Megatron was not found.

int main()
{
	bool found{ false };
	std::string names[8]{ "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };
	std::string name{};
	std::cout << "Please enter a name: \t";
	std::cin >> name; // Didnt use cin.getline here because I dont need any data after the space
	std::cin.ignore();// cin stuff to clear cin buffer ect
	std::cin.clear();

	for (auto n : names) {
	
		if (name == n) {
		
			found = true;
		}
	}
	
	if (found) {
		std::cout << name << " was found!";
	}
	else {
		std::cout << name << " was not found!";
	}
}

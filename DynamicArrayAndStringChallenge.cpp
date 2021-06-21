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


//Write a program that :
//* Asks the user how many names they wish to enter.
//* Dynamically allocates a std::string array.
//* Asks the user to enter each name.
//* Calls std::sort to sort the names(See 10.4 --Sorting an array using selection sort and 10.11 --Pointer arithmetic and array indexing)
//* Prints the sorted list of names.
//
//  std::string supports comparing strings via the comparison operators <and >.You don’t need to implement string comparison by hand.
//
//Your output should match this:
//
//How many names would you like to enter ? 5
//Enter name #1: Jason
//Enter name #2: Mark
//Enter name #3: Alex
//Enter name #4: Chris
//Enter name #5: John
//
//Here is your sorted list :
//Name #1: Alex
//Name #2: Chris
//Name #3: Jason
//Name #4: John
//Name #5: Mark

//#define DEBUG

std::string getName(int index){
	

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::string str{};
	std::cout << "Enter name #" << index + 1 << "   ";
	std::getline(std::cin, str);
	
	return str;
}

void printNames(std::string * arr, int length) {

	std::cout << "\n";

	for (int i{}; i < length; ++i) {

		std::cout << arr[i] << std::endl;
	}


}

std::size_t getAmount() {

	std::size_t name_amount{};
	std::cout << "How many names do you wish to enter?\t";
	std::cin >> name_amount;

	return name_amount;
}


int main()
{

	std::size_t name_amount{ getAmount() };

	std::string* strArray{ new std::string[name_amount] };

	for (int i{}; i < name_amount; ++i) {
		strArray[i] = getName(i);
	}

	std::sort(strArray, strArray + name_amount);

	printNames(strArray, name_amount);


#ifdef DEBUG //Macro for debugging stuff
	std::cout << "name amount " << name_amount << std::endl;
	std::cout << "strArray length" << sizeof(strArray) / sizeof(strArray[0]);
#endif

	delete[] strArray; //Cleanup of the array
	strArray = nullptr;


}

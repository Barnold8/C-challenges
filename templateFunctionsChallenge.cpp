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
#include <array>

//Write function prototypes for each of the following functions.
//Use the most appropriate parameter and return types (by value, by address, or by reference), including use of const where appropriate.

//1) A function named sumTo() that takes an integer parameter and returns the sum of all the numbers between 1 and the input number.
//
//2) A function named printEmployeeName() that takes an Employee struct as input.
//
//3) A function named minmax() that takes two integers as input and returns back to the caller the smaller and larger number in a std::pair.A std::pair 
// works identical to a std::tuple but stores exactly two elements.
//
//4) A function named getIndexOfLargestValue() that takes an integer array(as a std::vector), 
// and returns the index of the largest element in the array.
//
//5) A function named getElement() that takes an array of std::string(as a std::vector) and an index and returns the array element at that index(not a copy).
//Assume the index is valid, and the return value is const.

struct Employee {


};

int sumTo(int end);

void printEmployee(const Employee& printMe);

int minmax(int x,int y);

int getIndexOfLargestValue(const std::vector<int>& arr);

const std::string& getElement(const std::vector<std::string>& arr, int index);

int main() { 

	//legit nothing here :(
}

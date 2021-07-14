#include "pch.h"
#include <vector>
#include <iostream>
#include "Node.h"
#include "MyHeader.h"
#include "constants.h"
#include <string>

//Write function prototypes for the following cases.Use const if / when necessary.
//a) A function named max() that takes two doubles and returns the larger of the two.
//
//b) A function named swap() that swaps two integers.
//
//c) A function named getLargestElement() that takes a dynamically allocated array of integers
//and returns the largest number in such a way that the caller can change the value of the element returned(don’t forget the length parameter).

double max(const double& num1, const double& num2) { // A

	return num1 > num2 ? num1 : num2;

}
void swap(int& num1, int& num2); //B  only just read that it was asking for templates, face palm time



void specificPrint(int x, int y) { // Just for me for printing

	std::cout << "X = " << x << "\nY = " << y << std::endl;

}

int getLargestElement(int* arr, size_t size); // c

int main() {
	
	
}

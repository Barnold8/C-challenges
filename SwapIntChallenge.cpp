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


//Write your own function to swap the value of two integer variables. Write a main() function to test it.

void swapInt(int* x, int* y) {	//Function that swaps integer values. I used pointers here to I can point to the location and then overwrite the value accordingly

	int temp{ *x }; // the * here is referencing the actual value and not the memory address. So when you see * you can substitute the value the pointer is pointing to and not the address
	*x = *y;
	*y = temp;
	
}

int main() { 



	int* x{ new int(10) }; //Using dynamic memory allocation here for easy pointer usage
	int* y{ new int(20) };

	std::cout << *x << std::endl;
	std::cout << *y << std::endl;

	swapInt(x, y); // function call to do the swap

	std::cout << *x << std::endl;
	std::cout << *y << std::endl;

	
	delete x;
	delete y;//free memory to avoid memory leak

}

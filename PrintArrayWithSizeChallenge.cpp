#include "pch.h"
#include <vector>
#include <iostream>
#include "Node.h"
#include "MyHeader.h"
#include "constants.h"


int main() {

	//Print the following array to the screen using a loop :
	

	constexpr int arr[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 }; //challenge originally has the variable named array but this is a keyword so I changed it to arr

	for (int i{ 0 }; i < sizeof(arr) / sizeof(arr[0]); ++i) {
	
		std::cout << arr[i] << std::endl;
	}

}

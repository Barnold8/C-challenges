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


int calc(int(*func)(int,int), int x,int y) {

	return func(x, y);
	
}

int _times(int x, int y) {

	return x * y;

}

int _divide(int x, int y) {

	return x / y;

}

int _add(int x, int y) {

	return x + y;

}

int _sub(int x, int y) {

	return x - y;

}


int main() { 


	int choice{};
	int x{};
	int y{};
	int result{};

	std::cout << "Pick a number\n1.add calculation\n2.subtract calculation\n3.times calculation\n4.divide calculation\n";
	std::cin >> choice;
	std::cout << "Pick your left hand operand ";
	std::cin >> x;
	std::cout << "Pick your right hand operand ";
	std::cin >> y;

	switch (choice) {
	
	case 1:

		result = calc(_add, x, y);
		break;
		

	case 2:

		result =  calc(_sub, x, y);
		break;

	case 3:

		result = calc(_times, x, y); 
		break;


	case 4:

		result = (_divide, x, y);
		break;

	default:
		break;
	}
	
	std::cout << "Result: " << result;

}

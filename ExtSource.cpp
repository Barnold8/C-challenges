#include "pch.h"
#include <iostream>
#include "MyHeader.h"
#include <string>

int add(int x, int y)
{
	return x + y;
}

void printINT(int var) {


	std::cout << var << std::endl;

}

template <class Any>
void PrintArrayFunny(std::vector<Any> arr) {

	for (int i = 0; i < arr.size(); i++) {
		int x = *&arr[i];
		std::cout << x << std::endl;
	}
}

std::vector<int> fib(int start1, int start2, int len) {

	std::vector<int>x = {};
	x.resize(len);
	x[0] = start1;
	x[1] = start2;

	for (int i = 2; i < len; i++) {
		x[i] = x[i - 2] + x[i - 1];
	}

	return x;

}

int readNumber() {

	int dat{};

	std::cout << "Input a number for addition: ";
	std::cin >> dat;

	return dat;

}

void writeAnswer(int dat) {

	std::cout << dat << std::endl;

}

int pow(int num, int power) { //basic power function

	int result{ 1 };

	while (power != 0) {
	
		result *= num;
		power--;
		//std::cout << result << std::endl;
	}
	
	return result;

}



int SciNotation(int number, int exponent) {

	return number * pow(10, exponent);

}

double SciNotation(double number, double exponent) {

	return number * pow(10, exponent);

}

static void PrintLol() { //static keyword provides internal linkage for function to stop if being called out of file.

	std::cout << "LOL" << std::endl;

}

extern int g_test_int{ 100 }; //To show that extern linkage is possible with variables since their linkage by default is internal

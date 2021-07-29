#include "pch.h"
#include <iostream>
#include "MyHeader.h"
#include <string>


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

static void PrintLol() {

	std::cout << "LOL" << std::endl;

}


//int sumTo(int value) {
//
//	int x{ 0 };
//
//	for (int i{ 0 }; i <= value; ++i) {
//
//		x += i;
//
//	}
//	return x;
//
//}


char* returnAlphabet() {

	char alpha[26]{};

	for (char a{ 'a' }; a <= 'z'; ++a) {							
		alpha[static_cast<int>(a) - 97] = a;
	}

	return alpha;


}

void printCharArray(char* c) {

	int count{ 0 };
	while (c[count] != '\0') {

		std::cout << c[count];
		++count;
	}

}

std::string getString() {

	std::string tempString{};

	std::cout << "Please enter a string:\t";
	std::getline(std::cin, tempString);

	if (std::cin.fail()) {

		std::cin.clear();
		std::cin.ignore();
		std::cout << "Error at input" << std::endl;
	}
	else {

		return tempString;
	}


}


void HowManySpaces(std::string s) {
	int count{};
	for (int i{}; i < s.length(); ++i) {

		if (s[i] == ' ') {
			++count;
		}

	}
	std::cout << "There is " << count << " amount of spaces!!" << std::endl;
}

extern int g_test_int{ 100 };

Date::Date(const int& d, const int& m, const int& y) : m_day{ d }, m_month{ m }, m_year{y} {}

void Date::setDate(const int& d, const int& m, const int& y) {

	m_day = d;
	m_month = m;
	m_year = y;

}

void Date::printDate() {

	std::cout << m_day << "/" << m_month << "/" << m_year << std::endl;

}

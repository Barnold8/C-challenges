#pragma once
#include <vector>
#include <cstdint>


//Functions ------------------------------------------------------
void printINT(int var);

template <class Any>
void PrintArrayFunny(std::vector<Any> arr);

std::vector<int> fib(int start1, int start2, int len);

int readNumber();

void writeAnswer(int dat);

int BinToDec(std::string data);

int pow(int num, int power);

void printFAST8(int_fast8_t printable);

int SciNotation(int number, int exponent);

double SciNotation(double number, double exponent);



//void printNodes(Node* n);


//int sumTo(int value);

char* returnAlphabet();

void printCharArray(char* c);

std::string getString();

void HowManySpaces(std::string s);

static void PrintLol();

// ------------------------------------------------------


//Classes ------------------------------------------------------

class Date {

private:

	using type = int;

	type m_day{};
	type m_month{};
	type m_year{};

public:

	//Forward declaration of class functions and constructors

	Date(const int&, const int&, const int&);

	void setDate(const int&, const int&, const int&);

	void printDate();

	int getDay() { return m_day; }
	int getMonth() { return m_month; }
	int getYear() { return m_year; }

};
// ------------------------------------------------------

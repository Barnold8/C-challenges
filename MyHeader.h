#pragma once
#include <vector>
#include <cstdint>

int add(int x, int y);

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


struct Node {

	int value{};
	Node* next;


};

//void printNodes(Node* n);

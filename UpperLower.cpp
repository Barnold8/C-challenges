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


void stringFormat(void(*funcptr)(std::string&), std::string& str) {

	funcptr(str);

}

void upper(std::string& str) {

	
	int counter{};

	for(auto i: str){

		str[counter] = str[counter] - 32;
		++counter;
	}
	

}

void lower(std::string& str) {


	int counter{};

	for (auto i : str) {

		str[counter] = str[counter] + 32;
		++counter;
	}

}


int main() { 

	std::string hello{ "hello world" };
	std::cout << hello << " ";
	stringFormat(upper, hello);
	std::cout << hello << " ";


	stringFormat(lower, hello);
	std::cout << hello << " ";


}

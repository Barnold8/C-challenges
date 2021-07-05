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
//Self challenge, I set myself this task.

//Create a program that makes the first letter of a string capital and append a . at the end of the string. 
// The user must be able to use a character to determine if a character turns capital or not
//User must be able to input a string.


std::string getString(std::string s) {

	std::string temp{};
	
	std::getline(std::cin, temp);
	std::cin.ignore(); //cleanup stuff
	std::cin.clear();
	return temp;
}

void capitalFormat(std::string& str) { //reference is used to directly edit the string

	int counter{ 0 };
	for(auto i: str){ //using for each loop so length of string is never needed directly

		if (i == '_') {
			
			str[counter] = NULL;
			str[counter + 1] = char(str[counter+1]-32);
		}
		++counter;
	}
	
	if (int(str[0]) >= 97) {
	
		str[0] -= 32;
	}
	str.resize(str.size() + 1);
	str[str.size()-1] = '.';

}


int main() { 

	std::array<std::string, 3> strings{ "Please input a string\n","Inputting the character _ will make the chracter after it capital\n\nFor example: _word, becomes Word", "\nPlease input a string: " };
	std::cout << strings[0] << strings[1] << strings[2]; //This makes the cout a lot shorter and easier to edit strings if needed

	std::string sentence{ getString() }; //Get the initial string
	capitalFormat(sentence);
	std::cout << sentence;
}

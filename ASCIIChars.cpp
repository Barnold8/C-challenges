#include "pch.h"
#include <vector>
#include <iostream>
#include "MyHeader.h"
#include "constants.h"

                                               //Write a program that prints out the letters a through z along with their ASCII codes.

int main()
{

	char arr[26];									                //Allocate a char array to the amount of elements as they are characters in the alphabet
	char start{ 'a' };								            //start from a
	arr[0] = start;									              //stops a weird character from overwriting a

	while (start != 'z') {
		++start;
		arr[static_cast<int>(start) - 97] = start;	 //97 is the number of 'a' in the ascii table so if we subtract this from the integer equivalent of the char,
													                       //we get the correct index in the arr array to input the alphabet character accordingly
	}
	
	for (int i = 0; i < 26; i++) {					       //Part of the code that prints the letter and is ascii code respectively 
		
		std::cout << "Letter {" << arr[i] << "}\tASCII code {" << static_cast<int>(arr[i]) << "}\n"; //I cant even be bothered to explain this line
	
	}

	return 0;

}

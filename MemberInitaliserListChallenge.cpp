#include "pch.h"
#include <vector>
#include <iostream>
#include "Node.h"
#include "MyHeader.h"
#include "constants.h"
#include <string>
#include <cassert>
#include <cstdint>

//Write a class named RGBA that contains 4 member variables of type std::uint_fast8_t named m_red, m_green, m_blue, and m_alpha
//(#include cstdint to access type std::uint_fast8_t).
// Assign default values of 0 to m_red, m_green, and m_blue, and 255 to m_alpha.
// Create a constructor that uses a member initializer list that allows the user to initialize values for m_red, m_blue, m_green, and m_alpha.
// Include a print() function that outputs the value of the member variables.
//

class RGBA {

private:

	using col = std::uint_fast8_t;

	col m_red   { 0 };
	col m_blue  { 0 };
	col m_green { 0 };
	col m_alpha { 255 };

public:

	RGBA(const col& r, const col& b, const col& g, const col& a = 255) : m_red{ r }, m_blue{ b }, m_green{ g }, m_alpha{a}
	{}

	void print() {
	
		std::cout << "\nRed : " << static_cast<int>(m_red);
		std::cout << "\nGreen : " << static_cast<int>(m_green);
		std::cout << "\nBlue : " << static_cast<int>(m_blue);
		std::cout << "\nAlpha : " << static_cast<int>(m_alpha) << std::endl;
	
	}

};


int main() {

	RGBA teal{ 0, 127, 127 };
	teal.print();

	return 0;
}

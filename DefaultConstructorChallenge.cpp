#include "pch.h"
#include <vector>
#include <iostream>
#include "Node.h"
#include "MyHeader.h"
#include "constants.h"
#include <string>
#include <cassert>


//
//a) Write a class named Ball.
// Ball should have two private member variables with default values :
// m_color(“black”) and m_radius(10.0).Ball should provide constructors to set only m_color, set only m_radius, set both, or set neither value.For this quiz question, do not use default parameters for your constructors.Also write a function to print out the colorand radius of the ball.
//The following sample program should compile :
//
//
//int main()
//{
//	Ball def{};
//	def.print();
//
//	Ball blue{ "blue" };
//	blue.print();
//
//	Ball twenty{ 20.0 };
//	twenty.print();
//
//	Ball blueTwenty{ "blue", 20.0 };
//	blueTwenty.print();
//
//	return 0;
//}
//
//and produce the result :
//
//color: black, radius : 10
//color : blue, radius : 10
//color : black, radius : 20
//color : blue, radius : 20

//class Ball { // a
//
//private:
//
//	using string = std::string;
//
//	string m_color{ "black" };
//	double m_radius{ 10.0 };
//
//public:
//
//	Ball(string col ) {
//		
//		m_color = col;
//	
//	}
//
//	Ball(double r = 10.0) {
//	
//		m_radius = r;
//
//	}
//
//	Ball(string col, double r  ) {
//	
//		m_color = col;
//		m_radius = r;
//
//	}
//	
//	void print() {
//	
//		std::cout << "Color: " << m_color << ", Radius: " << m_radius << std::endl;
//	
//	}
//
//};


//b) Update your answer to the previous question to use constructors with default parameters.Use as few constructors as possible.

class Ball { // b

private:

	using string = std::string;

	string m_color{"black"};
	double m_radius{ 10.0 };

public:

	Ball() = default;

	Ball(double r, string col = "black") {
		
		m_radius = r;
		m_color = col;
	}

	Ball(string col, double r = 20.0) {
		m_radius = r;
		m_color = col;
	}
	

	void print() {

		std::cout << "Color: " << m_color << ", Radius: " << m_radius << std::endl;

	}

};


int main() {

	Ball def{};
	def.print();

	Ball blue{ "blue" };
	blue.print();

	Ball twenty{ 20.0 };
	twenty.print();

	Ball blueTwenty{ "blue", 20.0 };
	blueTwenty.print();

	return 0;
}

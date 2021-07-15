#include "pch.h"
#include <vector>
#include <iostream>
#include "Node.h"
#include "MyHeader.h"
#include "constants.h"
#include <string>


//a) Create a class called IntPair that holds two integers.
//This class should have two member variables to hold the integers.
//You should also create two member functions : one named “set” that will let you assign values to the integers, 
//and one named “print” that will print the values of the variables.

class IntPair {

public:
	int m_intOne{};
	int m_intTwo{};

	void set(const int& x, const int& y){
			
		m_intOne = x;
		m_intTwo = y;

	}

	void print() {
	
		std::cout << "Pair(" << m_intOne << ", " << m_intTwo << ")" << std::endl;

	}


};

int main() {


	IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)

	IntPair p2{ 2, 2 }; // initialize p2 values to (2, 2)

	p1.print();
	p2.print();

}

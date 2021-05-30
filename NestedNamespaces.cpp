#include "pch.h"
#include <vector>
#include <iostream>
#include "MyHeader.h"
#include <iomanip>
#include "constants.h"



namespace parent {


	namespace child {
	
		int age = 12;

		void printAge() {
		
			std::cout << age << std::endl;
		
		
		}
	
	}

}


int main()
{

	parent::child::printAge();



	return 0;

}

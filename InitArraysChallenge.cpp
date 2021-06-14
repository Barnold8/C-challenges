#include "pch.h"
#include <vector>
#include <iostream>
#include "Node.h"
#include "MyHeader.h"
#include "constants.h"


//1) Declare an array to hold the high temperature(to the nearest tenth of a degree) for each day of a year(assume 365 days in a year).
//Initialize the array with a value of 0.0 for each day.

//2) Set up an enum with the names of the following animals : chicken, dog, cat, elephant, duck, and snake.
//Put the enum in a namespace.
//Define an array with an element for each of these animals, and use an initializer list to initialize each element to hold the number of legs that animal has.

//Write a main function that prints the number of legs an elephant has, using the enumerator.


void setTemp(float* t, int x, float y) {

	for (int i{ 0 }; i < x; i++) {

		t[i] = { y };

	}

	//for (int i{ 0 }; i < x; i++) {
	//	
	//	std::cout << "Day of year\t" << i + 1 << "\n" << "Temp of said day\t" << static_cast<float>(t[i]) << "\n\n";
	//
	//}
}


namespace Animals {
	
	enum types {	// chicken, dog, cat, elephant, duck, and snake.

		chicken,
		dog,
		cat,
		elephant,
		duck,
		snake,
		MAX


	};

}


void howManyLegs(Animals::types n) {

	const int animal_legs[Animals::MAX]{ 2,4,4,4,2,0 };

	std::cout << animal_legs[n] << std::endl;

}

int main(){

	// 1) ---------------
	const int year{ 365 };
	const float temp{ 0.0 };
	float tempDays[year]{};

	setTemp(tempDays, year, temp);
	//-------------------

	//2) ----------------

	howManyLegs(Animals::elephant);
	howManyLegs(Animals::snake);


	//-------------------

	return 0;

}

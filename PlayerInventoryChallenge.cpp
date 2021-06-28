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



//Pretend you’re writing a game where the player can hold 3 types of items : health potions, torches, and arrows.
//Create an enum to identify the different types of items, and an std::array to store the number of each item the player is
//carrying(The enumerators are used as indexes of the array).The player should start with 2 health potions, 5 torches, and 10 arrows.
//Write a function called countTotalItems() that returns how many items the player has in total.
//Have your main() function print the output of countTotalItems() as well as the number of torches.


class Player { //Use of class to make my life 10x easier

private:

	enum items {

		health,
		torch,
		arrow,
		MAX

	};

	std::array<int, 3>inventory{0,0,0};	//Default inventory, no player would start with items. 


public:

	Player() { //default constructor function, not sure if needed or not. Could be used to force inventory values at player creation
	
	
	}

	int countTotalItems() {
		
		int total{ 0 };
		
		for (auto i : inventory) {
		
			total += i;	//Simple for each loop that adds to total the value from the array index iterated over
		}

		return total;
	
	}

	void setItems(int _health, int _torches, int _arrows) { //used _ for easier name usage 
	
		inventory[health] = _health; //As asked in the challenge, enum was used for indexing array items
		inventory[torch] = _torches;
		inventory[arrow] = _arrows;

	}

	int getItems(int type) {
	
		return inventory[type]; //Returns array item at index given
	}

};


int main() {

	Player p{};
	p.setItems(2, 5, 10); //Used to set the item amount on object, can be used to rewrite players inventory data. In real world code it would make more sense to add more parameters so that you can either choose to set certain items and not have to change them all the time for each function call
	std::cout << "Total item count:\t" << p.countTotalItems() <<std::endl;
	std::cout << "Total torches:\t\t" << p.getItems(1); //Used regular index because I cant access type inventory since I made it private


}

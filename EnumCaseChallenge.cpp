#include "pch.h"
#include <vector>
#include <iostream>
#include "MyHeader.h"
#include "constants.h"

//Define an enumerated type to choose between the following monster races : orcs, goblins, trolls, ogres, and skeletons.
//Define a variable of the enumerated type you defined in question 1 and initialize it with the troll enumerator.

enum Creatures {

	orc,
	goblin,
	troll,
	ogre,
	skeleton

};


int main(){


	Creatures Enemy = troll;

	switch (Enemy) {
	
	case orc:

		std::cout << "Orc has spawned!" << std::endl;
		break;

	case goblin:

		std::cout << "Goblin has spawned!" << std::endl;
		break;

	case troll:

		std::cout << "Troll has spawned!" << std::endl;
		break;

	case ogre:

		std::cout << "Ogre has spawned!" << std::endl;
		break;

	case skeleton:

		std::cout << "Skeleton has spawned!" << std::endl;
		break;
	}

	
	return 0;

}

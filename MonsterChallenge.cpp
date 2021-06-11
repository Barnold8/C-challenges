#include "pch.h"
#include <vector>
#include <iostream>
#include "MyHeader.h"
#include "constants.h"


//In designing a game, we decide we want to have monsters, because everyone likes fighting monsters.
// Declare a struct that represents your monster.
// The monster should have a type that can be one of the following : an ogre, a dragon, an orc, a giant spider, or a slime.
// Use an enum class for this.
//Each individual monster should also have a name(use a std::string), as well as an amount of health that represents how much damage they can take before they die.
// Write a function named printMonster() that prints out all of the struct’s members.
//Instantiate an ogre and a slime, initialize them using an initializer list, and pass them to printMonster().

enum class MonsterType{

	ogre,
	dragon,
	orc,
	giant_spider,
	slime

};


struct monster {

	std::string name{};
	int health{};
	MonsterType mType{};
};

void printMonster(monster M) {

	std::string monster_type{};

	switch (M.mType) {
		
	case MonsterType::ogre:
		monster_type = "ogre";
		break;

	case MonsterType::dragon:
		monster_type = "dragon";
		break;

	case MonsterType::orc:
		monster_type = "orc";
		break;

	case MonsterType::giant_spider:
		monster_type = "giant_spider";
		break;

	case MonsterType::slime:
		monster_type = "slime";
		break;
	default:
		monster_type = "undefined";
		break;
	}

	std::cout << "Our monster is an " << monster_type << "\n\n";
	std::cout << "Their name is " << M.name << "\n\n";
	std::cout << "Their health is " << M.health << " points" << "\n\n";

}

int main(){


	monster jerry{ "Jerry",100,MonsterType::ogre};
	monster brian{ "Brian",25,MonsterType::slime };

	printMonster(jerry);
	printMonster(brian);

	return 0;

}

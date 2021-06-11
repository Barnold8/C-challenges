#include "pch.h"
#include <vector>
#include <iostream>
#include "MyHeader.h"
#include "constants.h"


//You are running a website, and you are trying to keep track of how much money you make per day from advertising.
//Declare an advertising struct that keeps track of how many ads you’ve shown to readers, what percentage of ads were clicked on by users,
//and how much you earned on average from each ad that was clicked.Read in values for each of these fields from the user.
//Pass the advertising struct to a function that prints each of the values, and then calculates how much you made for that day(multiply all 3 fields together).

struct advertising {

	int ads_shown{};
	float percentage_clicked{};
	double average_earned{};

};

void printAdvertising(advertising object) {

	std::cout << "Ads shown:\t\t\t\t" << object.ads_shown << std::endl;
	std::cout << "Percentage of ads clicked:\t\t" << object.percentage_clicked << std::endl;
	std::cout << "Average earned:\t\t\t\t" << object.average_earned << std::endl;
	std::cout << "Profit for the day:\t\t\t" << object.ads_shown * object.percentage_clicked/100 * object.average_earned << "\n";

}


int main(){

	advertising E{ 10,25.24,1544.323551 };
	printAdvertising(E);

	
	return 0;

}

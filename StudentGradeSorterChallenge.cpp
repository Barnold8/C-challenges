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


//Write the following program : Create a struct that holds a student’s first name and grade(on a scale of 0 - 100).
// Ask the user how many students they want to enter. Create a std::vector to hold all of the students.Then prompt the user for each nameand grade.
// Once the user has entered all the names and grade pairs, sort the list by grade(highest first).
// Then print all the namesand grades in sorted order.
// 
//For the following input :
//
//Joe
//82
//Terry
//73
//Ralph
//7
//Alex
//94
//Mark
//88
//The output should look like this:
//
//Alex got a grade of 94
//Mark got a grade of 88
//Joe got a grade of 82
//Terry got a grade of 73
//Ralph got a grade of 4
//You can assume that names don’t contain spaces and that that input extraction doesn’t fail.


struct Student {

	std::string name{};
	int grade{};


};

bool compareStudents(const Student& a, const Student& b) //copied this from the solution of the challenge because my sort was missing the function, i didnt see any documentation using a function at the end of the sort
{
	return (a.grade > b.grade);
}

int main() { 

	int student_amount{};
	std::vector<Student> students{};
	std::cout << "How many students do you wish to input? ";
	std::cin >> student_amount;
	students.resize(student_amount);

	for (int i{}; i < student_amount; ++i) {

		
		std::string name{  };
		int grade{};

		std::cout << "Please enter student name:\t";
		std::cin >> name;

		//std::cin.ignore();
		//std::cin.clear(); <--- was used when I was using getline.

		std::cout << "Please enter their grade ";
		std::cin >> grade;

		students[i] = Student{ name,grade };

	}

	std::sort(students.begin(), students.end(), compareStudents);

	for (auto i : students){

		std::cout << i.name << " has the grade of " << i.grade << std::endl;
	}

}

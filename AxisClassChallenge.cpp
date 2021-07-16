#include "pch.h"
#include <vector>
#include <iostream>
#include "Node.h"
#include "MyHeader.h"
#include "constants.h"
#include <string>

//a) Write a simple class named Point3d.The class should contain :
//  *Three private member variables of type int named m_x, m_y, and m_z;
//*	 A public member function named setValues() that allows you to set values for m_x, m_y, and m_z.
//*  A public member function named print() that prints the Point in the following format : <m_x, m_y, m_z>

//b) Add a function named isEqual() to your Point3d class.The following code should run correctly :

										//int main()
										//{
										//    Point3d point1;
										//    point1.setValues(1, 2, 3);
										//
										//    Point3d point2;
										//    point2.setValues(1, 2, 3);
										//
										//    if (point1.isEqual(point2))
										//    {
										//        std::cout << "point1 and point2 are equal\n";
										//    }
										//    else
										//    {
										//        std::cout << "point1 and point2 are not equal\n";
										//    }
										//
										//    Point3d point3;
										//    point3.setValues(3, 4, 5);
										//
										//    if (point1.isEqual(point3))
										//    {
										//        std::cout << "point1 and point3 are equal\n";
										//    }
										//    else
										//    {
										//        std::cout << "point1 and point3 are not equal\n";
										//    }
										//
										//    return 0;
										//}



class Point3d { // a

private:

	int m_x;
	int m_y;
	int m_z;


public:

	void setValues(const int& x, const int& y , const int& z) {
	
		 m_x = x;
		 m_y = y;
		 m_z = z;

		
	}

	void print() {
	
		std::cout << "<" << m_x << ", " << m_y << ", " << m_z << ">" << std::endl;
	
	}

	bool isEqual(const Point3d& obj) {
	
		if (m_x == obj.m_x && m_y == obj.m_y && m_z == obj.m_z) {
			
			return true;
		}
		else { return false; }
	}

};

int main(){
	Point3d point1;
	point1.setValues(1, 2, 3);

	Point3d point2;
	point2.setValues(1, 2, 3);

	if (point1.isEqual(point2))
	{
		std::cout << "point1 and point2 are equal\n";
	}
	else
	{
		std::cout << "point1 and point2 are not equal\n";
	}

	Point3d point3;
	point3.setValues(3, 4, 5);

	if (point1.isEqual(point3))
	{
		std::cout << "point1 and point3 are equal\n";
	}
	else
	{
		std::cout << "point1 and point3 are not equal\n";
	}

	return 0;
}

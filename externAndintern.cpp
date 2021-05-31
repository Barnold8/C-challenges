#include "pch.h"
#include <vector>
#include <iostream>
#include "MyHeader.h"
#include <iomanip>
#include "constants.h"

extern int g_test_int; // Much like the forward declaration for functions, this is also needed for extern variables 

int main()
{

	std::cout << g_test_int;

	// PrintLol();	//Should provide linking error, it is commented out for me testing the use of extern variable 

	return 0;

}

//program prints 100 to the console as intended. 

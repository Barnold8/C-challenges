#include "pch.h"
#include <vector>
#include <iostream>
#include "Node.h"
#include "MyHeader.h"
#include "constants.h"


void sortArr(int* arr, int size) {

	for (int i{}; i < size - 1; ++i){
		
		if (arr[i] > arr[i + 1]) {
			
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
			sortArr(arr, size);
		}
		
	}

}


int main() {

	int arr[]{ 1,2,3,5,6,44,11,12121,4,6,7,8898,9,0 };

	sortArr(arr, sizeof(arr) / sizeof(arr[0]));

	for (int i{ 0 }; i < sizeof(arr) / sizeof(arr[0]); ++i) {
	
		std::cout << arr[i] << std::endl;
	}

}

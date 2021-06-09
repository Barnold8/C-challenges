#include "pch.h"
#include <vector>
#include <iostream>
#include "MyHeader.h"
#include "constants.h"

class Gate {

private:

	bool input1{ 0 };
	bool input2{ 0 };
	bool output{ 0 };
	char gateTYPE;

public:

	Gate(char gateType) {
	
		gateTYPE = gateType; //Set what kind of logic gate this is
		
	}

	void setState() { //This sets the output desired based on the inputs given
		
		switch (gateTYPE) {
			
		case 'x':

			if (input1 && !input2 || !input1 && input2) {

				output = 1;
			}
			else { output = 0; }
			break;
		}
		
	}

	void setInputs(bool A, bool B) {
	
		input1 = A;
		input2 = B;
	
	}

	bool returnOutput() {
		return output;
	}

	void Output() {
	
		std::cout << output << std::endl;
	}

};


int main()
{
	

	Gate A = Gate('x');

	A.setInputs(0, 0);
	A.setState();

	Gate B = Gate('x');
	B.setInputs(0, 0);
	B.setState();

	A.setInputs(1, B.returnOutput());
	B.setInputs(A.returnOutput(), 0);


	A.setState();
	B.setState();
	A.setState();
	B.setState();

	std::cout << B.returnOutput();

	return 0;

}

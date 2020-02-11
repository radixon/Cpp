/***************************************************************
	
	Project I Chapter Four - The sizeof Operator / Type Conversions
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Four.
	
	File Name:	project1.4.5.cpp
***************************************************************/
	#include <iostream>
	#include <bitset>
	using namespace std;
			
	int main()
	{	
		bitset <4> x = {0b0011};
		long double y = {0100};
		char z = 'z';
		
		// 4.9 The sizeof Operator
		cout << "Size Of x: " << sizeof(x) << endl;
		cout << "Size Of y: " << sizeof(y) << endl;
		cout << "Size Of z: " << sizeof(z) << endl;
		
		// 4.11.1 The Arithmetic Conversions
		y = 3.7 + z;
		cout << "y = " << y << endl;
										
		return 0;
	}


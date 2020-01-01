/***************************************************************
	
	Project I Chapter Four - The Bitwise Operators
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Four.
	
	File Name:	project1.4.4.cpp
***************************************************************/
	#include <iostream>
	#include <bitset>
	using namespace std;
			
	int main()
	{	
		bitset <4> x = {0b0011};
		bitset <4> y = {0b0100};
		bitset <4> z = {0b000};
		
		z = x | y;
		cout << "Bitwise OR: " << z << endl;
		
		z = x & y;
		cout << "Bitwise AND: " << z << endl;
		
		z = y ^ z;
		cout << "Bitwise XOR: " << z << endl;
		
		z = ~z;
		cout << "Bitwise NOT: " << z << endl;
										
		return 0;
	}


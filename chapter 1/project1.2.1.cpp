/***************************************************************
	
	Project I Chapter Two - Primitive Built-in Types
	
	Demonstrate capabilities to execute concepts presented
	in Chapter One.
	
	File Name:	project1.2.1.cpp
***************************************************************/
	#include <iostream>
		
	int main()
	{
		// 2.1.2 Type Conversion
		int a(0);
		double b(0.0);
		
		a = 5;
		b = a;
		std::cout << "double b = " << b << std::endl;
		std::cout << '\n';
		std::cout << '\n';
		
		bool c = false;
		a = c;
		std::cout << "bool c as input to int a results in " 
					<< a << std::endl;
		std::cout << '\n';
		std::cout << '\n';
		
		unsigned int d = 0;
		a = -10;
		d = a;
		std::cout << "negative a as input to unsigned int d results in " 
					<< d << std::endl;
		std::cout << '\n';
		std::cout << '\n';
		
		return 0;
	}


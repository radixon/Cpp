/***************************************************************
	
	Project I Chapter Two - Primitive Built-in Types
	
	Demonstrate capabilities to execute concepts presented
	in Chapter One.
	
	File Name:	project1.2.1.cpp
***************************************************************/
	#include <iostream>
		
	int main()
	{
		// 2.1.1 Arithmetic Types
		short a(0);
		a = 10000;
		while (a > 0)
		{
			a = a + 1;
		}
		std::cout << "The minimum value of a short is  " << a  << std::endl;
		
		std::cout << std::endl;
		std::cout << std::endl;
		
		while (a < 0)
		{
			a = a - 1;
		}
		std::cout << "The minimum value of a short is  " << a  << std::endl;
		
		std::cout << std::endl;
		std::cout << std::endl;
		
		return 0;
	}


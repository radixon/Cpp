/***************************************************************
	
	Project I Chapter One
	
	Demonstrate capabilities to execute concepts presented
	in Chapter One.
	
	File Name:	project1.1.cpp
***************************************************************/
	#include <iostream>
		
	int main()
	{
			// 1.4.1 The while Statement
		int a(0);
		while(a < 10)
		{
			std::cout << "while loop case " << a + 1 << std::endl;
			std::cout << "a = " << a << std::endl;
			a = a + 1;
		}
	
		std::cout << std::endl;
		std::cout << std::endl;
		
		// 1.4.2 The for Statement
		for(int c = 0; c < 10; ++c)
		{
			std::cout << "for loop case " << c + 1 << std::endl;
			std::cout << "a = " << c << std::endl;
		}
		
		std::cout << std::endl;
		std::cout << std::endl;
		
		// 1.4.4 The if Statement
		int b{};
		if(b < 10)
		{
		std::cout << "Hello, World!!!" << std::endl;
		std::cout << std::endl;
		}
		
		return 0;
	}


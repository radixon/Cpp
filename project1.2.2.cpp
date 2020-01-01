/***************************************************************
	
	Project I Chapter Two - Variables
	
	Demonstrate capabilities to execute concepts presented
	in Chapter One.
	
	File Name:	project1.2.2.cpp
***************************************************************/
	#include <iostream>
	using namespace std;
	
	// 2.2.2 Variable Declarations and Definitions
		extern int m_files;
		int m_files;	// Must define the variable in one file
		
	int main()
	{
		// 2.2.1 Variable Definitons
		int a = 0;
		int b(5);
		int c{};
		int d{33};
		m_files = 137;
				
		std::cout << "a = " << a << '\t';
		std::cout << "b = " << b << '\t';
		std::cout << "c = " << c << '\t';
		std::cout << "d = " << d << '\t';
		std::cout << "m_files = " << m_files << '\t';
		std::cout << '\n';
		std::cout << '\n';
		
		
		
		
		
		return 0;
	}


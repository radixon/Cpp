/***************************************************************
	
	Project I Chapter Two - Compound Types
	
	Demonstrate capabilities to execute concepts presented
	in Chapter One.
	
	File Name:	project1.2.3.cpp
***************************************************************/
	#include <iostream>
	
			
	int main()
	{
		// 2.3.1 References
		int val_def(0);
		int new_val(48);
		int &ref_val = val_def;
		int *ptr_val = &val_def;
		
		val_def = 12;				
		std::cout << "val_def = " << val_def << '\t';
		std::cout << "ref_val = " << ref_val << '\t';
		std::cout << "*ptr_val = " << *ptr_val << '\t';
		std::cout << "ptr_val = " << ptr_val << '\t';
		std::cout << '\n';
		std::cout << '\n';
		
		ref_val = 24;				
		std::cout << "val_def = " << val_def << '\t';
		std::cout << "ref_val = " << ref_val << '\t';
		std::cout << "*ptr_val = " << *ptr_val << '\t';
		std::cout << "ptr_val = " << ptr_val << '\t';
		std::cout << '\n';
		std::cout << '\n';
		
		*ptr_val = 36;				
		std::cout << "val_def = " << val_def << '\t';
		std::cout << "ref_val = " << ref_val << '\t';
		std::cout << "*ptr_val = " << *ptr_val << '\t';
		std::cout << "ptr_val = " << ptr_val << '\t';
		std::cout << '\n';
		std::cout << '\n';
		
		ptr_val = &new_val;				
		std::cout << "val_def = " << val_def << '\t';
		std::cout << "ref_val = " << ref_val << '\t';
		std::cout << "*ptr_val = " << *ptr_val << '\t';
		std::cout << "ptr_val = " << ptr_val << '\t';
		std::cout << '\n';
		std::cout << '\n';
		
		
		
		return 0;
	}


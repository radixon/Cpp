/***************************************************************
	
	Project III Chapter Twelve - Dynamic Memory and Smart Pointers
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Twelve.
	
	File Name:	project3.12.1.cpp
***************************************************************/
	#include <iostream>
	#include <memory>
	
	class Factorial
	{
		static long x;
	public:		
		static long formula(long f_num)
		{
			int temp = f_num - 1;
			while(temp >= 1)
			{
				f_num *= temp;
				--temp;
			}
			return f_num;
		}
	};
			
				
	int main()
	{	
		unsigned num;
		Factorial ff1;
		
		std::cout << "What number do you want to know the factorial of?" << '\n';
		std::cin >> num;
		
		std::shared_ptr<long> answ = std::make_shared<long>(ff1.formula(num));
	
		
		std::cout << "The Factorial for " << num  << " is " << *answ << '\n';
						
										
		return 0;
	}


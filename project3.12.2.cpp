/***************************************************************
	
	Project III Chapter Twelve - Dynamic Arrays
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Twelve.
	
	File Name:	project3.12.2.cpp
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
		Factorial ff1;
		std::allocator<unsigned long> val;
		unsigned long* num = val.allocate(8);
		
		std::cout << "How many n objects are in the set?" << '\n';
		std::cin >> num[0];
		
		
		std::cout << "How many different groups of size r could be selected?" << '\n';
		std::cin >> num[1];
		
		
		num[2] = num[0] - num[1];
		num[3] = ff1.formula(num[0]);
		num[4] = ff1.formula(num[1]);
		num[5] = ff1.formula(num[2]);
				
		num[6] = num[3] / num[4];
		num[7] = num[6] / num[5];
	
		
		std::cout << "There are " << num[7]  << " combinations of the given data!" << '\n';
		
		val.deallocate(num,8);
						
										
		return 0;
	}




/***************************************************************
	
	Project I Chapter Seven - static Class Members
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Seven.
	
	File Name:	project2.7.6.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	using namespace std;
	
	class Factorial
	{
		static long x;
	public:		
		// 7.6 Declaring static Members
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
		unsigned num1;
		unsigned num2;
		unsigned val;
		Factorial ff1;
		
		cout << "How many total objects are to be chosen from?" << endl;
		cin >> num1;
		
		cout << "How many ways are there to choose the object?" << endl;
		cin >> num2;
		
		val = num2 - num1;
		
		// 7.6 Using a Class static Member
		num1 = Factorial::formula(num2);
		val = ff1.formula(val);
		
		num2 = num1/val;
		
		cout << "There are " << num2 << " permutations of the given data." << endl;
						
										
		return 0;
	}


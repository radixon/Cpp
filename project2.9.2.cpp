/***************************************************************
	
	Project II Chapter Nine - Container Library Overview
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Nine.
	
	File Name:	project2.9.2.cpp
***************************************************************/
	#include <iostream>
	#include <array>
	using namespace std;
	
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
		// 9.2.4 List Initialization
		// 9.2.4 Library arrays Have Fixed Size
		array<unsigned, 5> val = {9,12,3,0,0};
		Factorial ff1;
		
		cout << "How many total objects are to be chosen from?" << endl;
		cout <<	val[0] << endl;
		
		
		cout << "How many ways are there to choose the object?" << endl;
		cout <<	val[1] << endl;
		
		val[3] = Factorial::formula(val[1]);
		val[4] = ff1.formula(val[2]);
		
		num = val[3]/val[4];
		
		cout << "There are " << num << " permutations of the given data." << endl;
						
										
		return 0;
	}


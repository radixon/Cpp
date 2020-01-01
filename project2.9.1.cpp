/***************************************************************
	
	Project II Chapter Nine - Overview of Sequential Containers
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Nine.
	
	File Name:	project2.9.1.cpp
***************************************************************/
	#include <iostream>
	#include <vector>
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
		// 9.1 Deciding Which Sequential Container to Use
		vector<unsigned> val(5,0);
		Factorial ff1;
		
		cout << "How many total objects are to be chosen from?" << endl;
		cin >> num;
		val[0] = num;
		
		
		cout << "How many ways are there to choose the object?" << endl;
		cin >> num;
		val[1] = num;
		
		val[3] = val[1] - val[0];
		
		val[4] = Factorial::formula(val[1]);
		val[5] = ff1.formula(val[3]);
		
		num = val[4]/val[5];
		
		cout << "There are " << num << " permutations of the given data." << endl;
						
										
		return 0;
	}


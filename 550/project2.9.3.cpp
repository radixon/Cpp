/***************************************************************
	
	Project II Chapter Nine - Sequential Container Operations
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Nine.
	
	File Name:	project2.9.3.cpp
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
		vector<unsigned> val;
		Factorial ff1;
		
		cout << "How many total objects are to be chosen from?" << endl;
		cin >> num;
		// 9.3.1 Using push_back
		val.push_back(num);
				
		cout << "How many ways are there to choose the object?" << endl;
		cin >> num;
		val.push_back(num);
		
		val.push_back(val[1] - val[0]);
		val.push_back(Factorial::formula(val[1]) );
		val.push_back(ff1.formula(val[2]) );
		
		// 9.3.2 Accessing Elements
		num = val[3]/val[4];
		
		cout << "There are " << num << " permutations of the given data." << endl;
						
										
		return 0;
	}


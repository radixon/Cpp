/***************************************************************
	
	Project I Chapter Seven - Defining Abstract Data Tye0Pointers to Functions
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Six.
	
	File Name:	project2.6.7.cpp
***************************************************************/
	#include <iostream>
	#include <math.h>
	using namespace std;
	
	
	double Pyth(const double lhs, const double rhs)
	{
		double c(0);
		
		c = sqrt(lhs*lhs + rhs*rhs);

		return c;	
	}

	// 6.6 Using Function Pointers
	double (*p_theorem)(const double lhs, const double rhs);
				
	int main()
	{	
		double num1;
		double num2;
		double c_length;
		
		cout << "This program will determine the Pythagorean Theorem";
		cout << " base on the length of the two sides provided by the user";
		cout << endl << endl;
		
		cout << "What is the length of side 1?" << '\t';
		cin >> num1;
		
		cout << endl;
		cout << "What is the length of side 2?" << '\t';
		cin >> num2;
		
		p_theorem = Pyth;
		c_length = p_theorem(num1,num2);
		cout << endl;
		cout << "The length of side 3 is:" << '\t' << c_length;				
			
										
		return 0;
	}


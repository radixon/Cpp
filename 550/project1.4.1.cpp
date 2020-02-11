/***************************************************************
	
	Project I Chapter Four - Fundamentals
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Four.
	
	File Name:	project1.4.1.cpp
***************************************************************/
	#include <iostream>
	using namespace std;
			
	int main()
	{	
		// 4.1.2 Precedence and Associativity		
		int prec1;
		int prec2;
				
		prec1 = 12 - 6 / 3 * 2;
		cout << "Result 1: " << '\t' << prec1 << endl;
		
		prec2 = (12 - 6) / 3 * 2;
		cout << "Result 2: " << '\t' << prec2 << endl;
		cout << endl;
		
		// 4.2 Arithmetic Operations
		prec1 += prec2;
		cout << "Result 3: " << '\t' << prec1 << endl;
		cout << "Result 4: " << '\t' << prec2 << endl;
		cout << endl;
		
		prec2 = prec2 % prec1;
		cout << "Result 5: " << '\t' << prec2 << endl;
								
		return 0;
	}


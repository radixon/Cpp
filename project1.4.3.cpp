/***************************************************************
	
	Project I Chapter Four - The Conditional Operator
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Four.
	
	File Name:	project1.4.3.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	using namespace std;
			
	int main()
	{	
		cout << "Please enter a Year (YYYY)" << '\n';		
		int year;
		cin >> year;
		
		// 4.7 The Conditional Operator
		string leap_year = ((year % 4) != 0) ? "Not a leap year" 
									:	((year % 100) != 0) ? "a Leap Year!"
									:	((year % 400) != 0) ? "Not a leap year"
									:	"Leap Year!";
		
		cout << "The year you entered is..." << leap_year << endl;
								
		return 0;
	}


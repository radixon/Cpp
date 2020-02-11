/***************************************************************
	
	Project I Chapter Six - Function Matching
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Six.
	
	File Name:	project2.6.6.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	using namespace std;
	
	
	// 6.6 Function Matching
	void title_screen()
	{
		cout << "Welcome to Joules Gaming" << endl;
	}
	
	void title_screen(int x)
	{
		cout << "Player Selected" << endl;
		cout << x << " Player" << endl;
	}
	
	void title_screen(string x)
	{
		cout << x << ", Lousiana. Population of 1!" << endl;
	}

	
	
	
			
	int main()
	{	
		int num;
		string var;
		
		title_screen();
		cout << "Select Your Player Number" << endl;
		cout << "1. Red Falcon" << endl;
		cout << "2. Blue Falcon" << endl;
		cin >> num;
		title_screen(num);
		
		cout << endl;
		cout << "Which city does your player reside?" << endl;
		cin >> var;
		title_screen(var);
				
			
										
		return 0;
	}


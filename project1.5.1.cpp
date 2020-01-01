/***************************************************************
	
	Project I Chapter Five - Simple Statements / Statement Scope
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Four.
	
	File Name:	project1.5.1.cpp
***************************************************************/
	#include <iostream>
	using namespace std;
			
	int main()
	{	
		int time_delay{0};
		char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
		int letter{0};		
		cout << "How long before the next letter?" << endl;
		cout << "Computer counts to 2000 between letters." << endl;
		
		
		// 5.1 Simple Statement
		while(letter < 26)
		{
			cout << alphabet[letter] << endl;
			while(time_delay < 2000)
			{
				// 5.2 Statement Scope
				int new_time;
				time_delay++;
			}
			++letter;
		}
		cout << "This long!!!" << endl;
										
		return 0;
	}


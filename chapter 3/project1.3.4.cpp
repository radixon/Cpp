/***************************************************************
	
	Project I Chapter Three - Multidimentison Arrays
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Three.
	
	File Name:	project1.3.5.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	using namespace std;
			
	int main()
	{		
		// 3.5.1 Using Iterators	
		string choose[5] = {"1 for Eric", "2 for Shannon", "3 for Leah", "4 for Tracy"};
		string player[5] = {"Eric", "Shannon", "Leah", "Tracy"};
				
		// 3.5.2 Accessing the Elements of an Array
		int choice;
		string default_player;
		
		cout << "Choose a Player." << endl;
		for(auto new_p : choose)
		{
			cout << new_p << '\n';
		}
		cout << endl;		
		cin >> choice;
		choice = choice - 1;
		
		// 3.5.3 Pointers and Arrays
		string age[] = {"18", "23", "30", "36", "55"};
		string *new_a = age + choice;
		if(choice >= 0 && choice <= 3)
		{
			cout << "You choose " << player[choice] << " who is " 
					<< *new_a << " years old" << endl;
		}
		else
		{
			cout << "Choice out of range, please enter your player's name."
					<< endl;
			cin >> default_player;
			player[4] = default_player; 
			cout << endl;
			cout << player[4] << " is " << age[4] << " years old."
					<< endl;
		}
		
		
							
		return 0;
	}


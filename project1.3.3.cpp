/***************************************************************
	
	Project I Chapter Three - Introducing Iterators
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Three.
	
	File Name:	project1.3.3.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	#include <vector>
	using namespace std;
			
	int main()
	{		
		// 3.4.1 Using Iterators	
		vector<string> player{"Eric", "Shannon", "Leah", "Tracy"};
		vector<string> age{"18", "23", "30", "36", "55"};
		
		
		// 3.4.2 Iterator Arithmetic
		int choice;
		string default_player;
		
		cout << "Choose a Player 1 through 4." << endl;		
		cin >> choice;
		choice = choice - 1;
		if(choice >= 0 && choice <= 3)
		{
			cout << "You choose " << player[choice] << " who is " 
					<< age[choice] << " years old" << endl;
		}
		else
		{
			cout << "Choice out of range, please enter your player's name."
					<< endl;
			cin >> default_player;
			player.push_back(default_player); 
			cout << endl;
			cout << player[4] << " is " << age[4] << " years old."
					<< endl;
		}
							
		return 0;
	}


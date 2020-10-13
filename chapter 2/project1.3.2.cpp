/***************************************************************
	
	Project I Chapter Two - Library vector Type
	
	Demonstrate capabilities to execute concepts presented
	in Chapter One.
	
	File Name:	project1.2.7.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	#include <vector>
	using namespace std;
			
	int main()
	{		
		// 3.3.1 Defining and Initializing vectors	
		vector<string> player{"Eric", "Shannon", "Leah", "Tracy"};
		string default_player;
		
		// 3.3.2 Adding Elements to a vector
		int choice;
		
		cout << "Choose a Player 1 through 4." << endl;		
		cin >> choice;
		choice = choice - 1;
		if(choice >= 0 && choice <= 3)
		{
			cout << player[choice] << " is your player's name" << endl;
		}
		else
		{
			cout << "Choice out of range, please enter your player's name."
					<< endl;
			cin >> default_player;
			player.push_back(default_player); 
		}
	
		
		// 3.2.2 Operations on strings
		string age;
		cout << "How old is your player?" << endl;
		
		cin >> age;
		string player_age;
		
		if(choice >= 0 && choice <= 3)
		{
			player_age = player[choice] + " is " + age + " years old.";
		}
		else
		{
			player_age = player[4] + " is " + age + " years old.";
		}	
				
		cout << player_age << endl; 
			
						
		return 0;
	}


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
		string choose[5] = {
			{"Press 1 for Eric"}, {"Press 2 for Shannon"}, 
			{"Press 3 for Leah"}, {"Press 4 for Tracy"}};
		int choice;
		int a_choice;
		string default_player;
		
		cout << "Choose a Player." << endl;
		for(auto new_p : choose)
			{
				cout << new_p << '\n';
			}
		cout << endl;		
		
		cin >> choice;
		if(choice < 1 || choice > 4)
			{
				choice = 5;
			}
		
		choice = choice - 1;
							
		// 3.6 Multidimensional Arrays
		string age[2][5] = 	
			{
				{"Eric", "Shannon", "Leah", "Tracy"},
				{"18", "23", "30", "36", "55"}
			};
													
		if(choice >= 0 && choice <= 3)
			{
			
				cout << "You choose " << age[0][choice] << " who is " 
					<< age[1][choice] << " years old" << endl;
			}
		else
			{
				cout << "Choice out of range, please enter your player's name."	<< endl;
				cin >> default_player;
				cout << endl;
			
				age[0][choice] = default_player;
				cout << age[0][choice] << " is " << age[1][choice] << " years old."
					<< endl;
			}
								
		return 0;
	}


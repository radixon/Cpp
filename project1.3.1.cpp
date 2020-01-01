/***************************************************************
	
	Project I Chapter Two - Library string Type
	
	Demonstrate capabilities to execute concepts presented
	in Chapter One.
	
	File Name:	project1.2.6.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	using namespace std;
			
	int main()
	{		
		// 3.2.1 Defining and Initializing strings	
		string player_one("Eric");
		string player_two("Ashley");
		
		int choice{0};
		cout << "Press 1 to choose Player One" << endl;
		cout << "Press 2 to choose Player Two" << endl;
		
		cin >> choice;
		if(choice == 1)
			cout << player_one << " is Player One's name" << endl;
		if(choice == 2)
			cout << player_two << " is Player Two's name" << endl;
		if(choice != 1 && choice != 2)
		{
			cout << "Sorry your input was not a valid choice." << endl;
			choice = choice % 2;
			cout << "By default you choose" << " ";
				if(choice == 1)
					cout << player_one << endl;
		
				if(choice == 0)
					cout << player_two << endl;
		}
		
		// 3.2.2 Operations on strings
		string age;
		cout << "How old is your player?" << endl;
		
		cin >> age;
		string player_age;
		
		if(choice == 1)
			player_age = player_one + " is " + age + " years old.";
		if(choice != 1)
			player_age = player_one + " is " + age + " years old.";
		
		cout << player_age << endl; 
			
						
		return 0;
	}


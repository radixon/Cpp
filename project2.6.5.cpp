/***************************************************************
	
	Project I Chapter Six - Features For Specialized Uses
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Six.
	
	File Name:	project2.6.5.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	using namespace std;
	
	
	// 6.5.1 Default Arguments
	inline string player1(string p_name = "Cierra", string style = "Magic", double power = 9.1)
	{ // 6.5.2 Inline Functions
		cout << p_name << " is your player's name." << endl;
		cout << style << " is your player's fighting style" << endl;
		cout << power << " is your player's power level" << endl;
		
		return "Winner!";
	}
	
	
	
			
	int main()
	{	
		string p_name;
		string p_style;
		double p_power;
		char choice[6];
		int choose(0);
				
		cout << "Welcome to the beginning of your favorite RPG!" << endl;
		cout << endl;
		
		cout << "Would you like to change your player's name? [Y/N]" << '\t';
		cin >> choice;
		cout << endl;
		
		if(choice[0] == 'y' || choice[0] == 'Y')
		{
			cout << "What is your player's name?" << '\t';
			cin >> p_name;
			choose = 1;
		}
		
		if(choose == 1)
		{
			cout << "Would you like to change your player's fighting style? [Y/N]" << '\t';
			cin >> choice;
			cout << endl;
			if(choice[0] == 'y' || choice[0] == 'Y')
			{
				cout << "What is your player's fighting style?" << '\t';
				cin >> p_style;
				choose = 2;
			}
		}
		
		switch(choose)
		{
			case 1:
				player1(p_name);
				break;
			case 2:
				cout << "You have earned a 10 point bonus!" << endl;
				player1(p_name, p_style, 19.1);
				break;
			default:
				player1();
				break;
		}
				
			
										
		return 0;
	}


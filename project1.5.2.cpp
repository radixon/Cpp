/***************************************************************
	
	Project I Chapter Five - Conditional/Iterative Statements
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Five.
	
	File Name:	project1.5.2.cpp
***************************************************************/
	#include <iostream>
	#include <vector>
	#include <string>
	using namespace std;
			
	int main()
	{	
		double apr = 0.0;
		double interest;
		double temp;
		int num_payments(60);
		int credit_score;
		int audi_principal;
		double audi_payment;
		string audi_2019[12] = {"1.A3 ", " 2.A4 ", " 3.A5 ", " 4.A6 ", " 5.A7 ", " 6.A8 ",
							" 7.Q3 ", " 8.Q4 ", " 9.Q5 ", " 10.Q6 ", " 11.Q7 ", " 12.Q8 "};
		int choose;
				
		cout << "Please enter your current credit score: " << '\t';
		cin >> credit_score;
		
		// 5.3.1 The if Statement
		if(credit_score < 550)
		{
			apr = .125/12;
		}
		else if(credit_score >= 550 && credit_score < 620)
		{
			apr = 0.09125/12;
		}
		else if(credit_score >= 620 && credit_score < 700)
		{
			apr = 0.0525/12;
		}
		else if(credit_score >= 700 && credit_score < 730)
		{
			apr = 0.0225/12;
		}
		else
		{
			apr = 0.015/12;
		}
		
		
		cout << "Please choose one of the following from the list 2019 Audi." << endl;
		
		// 5.4.3 Range for Statement
		for(auto i : audi_2019)
		{
			cout << i << '\t';
		}
		cout << endl;
		cout << endl;
		cin >> choose;
		
		cout << endl;
		
		// 5.4.1 The while Statement
		while(choose < 1 || choose > 12 || cin.fail())
		{
			if(cin.good())
			{
				cout << "Please choose the number corresponding to the Audi of your choosing!";
				cout << endl;
				for(auto i : audi_2019)
				{
					cout << i << '\t';
				}
				cout << endl;
				cout << endl;
				cin >> choose;
				cout << endl;
			}
			else
			{
				cin.clear();
				cin.ignore(10000, '\n');
			}
		}
		
		// 5.3.2 The switch Statement
		switch (choose)
		{
			case 1:
				audi_principal = 42540;
				break;
			case 2 :
				audi_principal = 40195;
				break;
			case 3:
				audi_principal = 47290;
				break;
			case 4:
				audi_principal = 77160;
				break;
			case 5:
				audi_principal = 87200;
				break;
			case 6:
				audi_principal = 114105;
				break;
			case 7:
				audi_principal = 37295;
				break;
			case 8:
				audi_principal = 41185;
				break;
			case 9:
				audi_principal = 45395;
				break;
			case 10:
				audi_principal = 59365;
				break;
			case 11:
				audi_principal = 73765;
				break;
			case 12:
				audi_principal = 98970;
				break;
		}
		
		interest = 1 + apr;
		
		// 5.4.4 The do while Statement
		do
		{
			interest = interest * (1 + apr);
			--num_payments;
		}
		while(num_payments > 1);
		
		
		interest = 1 / interest;
		interest = 1 - interest;
		interest = interest / apr;
		audi_payment = audi_principal / interest;
		
		cout << "The principal on your 2019 Audi: " << audi_principal;
		cout << endl;
		cout << "With your credit score the APR is: " << (apr * 1200) << "%";
		cout << endl;
		cout << "Your monthly payment on your 2019 Audi: " << audi_payment;
		cout << endl;
		
			
										
		return 0;
	}


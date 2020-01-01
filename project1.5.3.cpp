/***************************************************************
	
	Project I Chapter Five - Jump Statements
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Five.
	
	File Name:	project1.5.3.cpp
***************************************************************/
	#include <iostream>
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
		string choose;
				
		cout << "Please enter your current credit score: " << '\t';
		cin >> credit_score;
		
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
		
		beg:
		cout << "Please choose one of the following from the list 2019 Audi." << endl;
		for(auto i : audi_2019)
		{
			cout << i << '\t';
		}
		cout << endl;
		cout << endl;
		cin >> choose;		
		cout << endl;
		
		// 5.5.3 The goto Statement
		if(choose == "1" || choose == "A3" || choose == "a3")
			goto cse1;
		else if(choose == "2" || choose == "A4" || choose == "a4")
			goto cse2;
		else if(choose == "3" || choose == "A5" || choose == "a5")
			goto cse3;
		else if(choose == "4" || choose == "A6" || choose == "a6")
			goto cse4;
		else if(choose == "5" || choose == "A7" || choose == "a7")
			goto cse5;
		else if(choose == "6" || choose == "A8" || choose == "a8")
			goto cse6;
		else if(choose == "7" || choose == "Q3" || choose == "q3")
			goto cse7;
		else if(choose == "8" || choose == "Q4" || choose == "q4")
			goto cse8;
		else if(choose == "9" || choose == "Q5" || choose == "q5")
			goto cse9;
		else if(choose == "10" || choose == "Q6" || choose == "q6")
			goto cse10;
		else if(choose == "11" || choose == "Q7" || choose == "q7")
			goto cse11;
		else if(choose == "12" || choose == "Q8" || choose == "q8")
			goto cse12;
		else
			goto beg;
		
		cse1:
			audi_principal = 42540;
		cse2 :
			audi_principal = 40195;
		cse3:
			audi_principal = 47290;
		cse4:
			audi_principal = 77160;
		cse5:
			audi_principal = 87200;
		cse6:
			audi_principal = 114105;
		cse7:
			audi_principal = 37295;
		cse8:
			audi_principal = 41185;
		cse9:
			audi_principal = 45395;
		cse10:
			audi_principal = 59365;
		cse11:
			audi_principal = 73765;
		cse12:
			audi_principal = 98970;
	
		
		interest = 1 + apr;
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


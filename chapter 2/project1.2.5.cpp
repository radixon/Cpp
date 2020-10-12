/***************************************************************
	
	Project I Chapter Two - Dealing with Types
	
	Demonstrate capabilities to execute concepts presented
	in Chapter One.
	
	File Name:	project1.2.5.cpp
***************************************************************/
	#include <iostream>
			
	int main()
	{		
		typedef double rates;				// 2.5.1 Type Aliases
		rates apr{0.05};		
		int mort_principal = 331945;
		int num_payments = 180;
		decltype(apr) interest = apr/12;	// 2.5.3 decltype
		
		auto temp1 = 1 + interest;
		auto temp2 = temp1;
		while(num_payments > 1)
		{
			temp1 = temp1 * temp2;
			--num_payments;
		}
	
		temp1 = 1 / temp1;
		temp1 = 1 - temp1;
		temp1 = temp1 / interest;
		
		auto mort_payment = mort_principal / temp1;
		
		std::cout << "The calculated mortgage payment on "
					<< "a $331945 principal with an apr of 5% "
						<< "for 15 years." << '\n';
		
		std::cout << '\n';
		std::cout << "Is " << mort_payment << '\n';
						
		return 0;
	}


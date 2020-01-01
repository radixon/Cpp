/***************************************************************
	
	Project I Chapter Seven - Constructors Revisited
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Seven.
	
	File Name:	project2.7.5.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	using namespace std;
	
	class Combinations
	{
		const unsigned n;
		const unsigned x;
		double combo;
	public:		
		// 7.5.1 Constructor Initializer List
		Combinations(long options, long choices) : x(choices), n(options)
		{
			long bay = n - x;
			long int temp;
			if(bay == 0)
			{
				this->combo = 1;
				cout << "There is only " << this->combo << "combination" << endl;
				return;
			}
			else if(bay < 0)
			{
				temp = options;
				options = choices;
				choices = temp;
				bay = bay/(-1);
			}
			
			
			temp = options - 1;
			while(temp >= 1)
			{
				options = options * temp;
				--temp;
			}
			
			
			temp = choices - 1;
			while(temp >= 1)
			{
				choices = choices * temp;
				-- temp;
			}
						
			temp = bay - 1;
			while(temp >= 1)
			{
				bay = bay * temp;
				--temp;
			}
			
			this->combo = options/(bay * choices);
			cout << "There are " <<  this->n << " options." << endl;
			cout << "There are " << this->x << " choices to fill said options." << endl;
			cout << "How many different combinations are possible?" << endl;
			cout << this->combo;
		}
		
		// 7.5.2 Delegating Constructors
		Combinations() : Combinations(1,1) {	}
	};
			
				
	int main()
	{	
		Combinations(9,12);				
										
		return 0;
	}



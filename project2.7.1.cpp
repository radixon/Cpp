/***************************************************************
	
	Project I Chapter Seven - Defining Abstract Data Types
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Six.
	
	File Name:	project2.7.1.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	using namespace std;
	
	
	class University
	{
		std::string degree;
		std::string program;
		int credits;
		double cost;
	public:
		double setCost(double costs);
		double getCost(void);
		double placement(double costs);		
		University() = default; // 7.1.4 Constructors
				
		// 7.1.2 Defining Member Functions
		void inputUniversity(string n_degree, string n_program, int n_credits, double n_cost)
		{
			degree = n_degree;
			program = n_program;
			credits = n_credits;
			cost = n_cost;	
		}
		
		
		void output()
		{
			std::cout << "Degree Level: " << degree << endl;
			std::cout << "Program: " << program << endl;
			std::cout << "Number of graduate: " << credits << endl;
			std::cout << "Estimated Cost of Program: " << cost << endl;
		}		
	};
	
	
	// 7.1.2 Defining a Member Function outside the Class
	double University::setCost(double costs)
	{
		cost = costs;
		return cost;
	}
	
	double University::getCost(void)
	{
		return cost;
	}
		
	double University::placement(double costs)
	{
		double placed;
		
		if(costs > 10000 && costs < 15000)
			goto case1;
		else if(costs > 14999 && costs < 20000)
			goto case2;
		else if(costs > 19999)
			goto case3;
		else
			goto case4;
		
		case1:
			placed = 77.6;
			return placed;
		case2:
			placed = 91.8;
			return placed;
		case3:
			placed = 98.1;
			return placed;
		case4:
			placed = 57.3;
			return placed;
	}
				
	int main()
	{	
		double percentage;
		University stetson;
		stetson.inputUniversity("Master of Science", "Business Analytics", 39, stetson.setCost(34540) );
		
		stetson.output();
		percentage = stetson.placement(stetson.getCost() );
		cout << endl;
		cout << "The program places " << percentage << "% of graduates 3 months after graduation.";
		cout << endl;
						
			
										
		return 0;
	}


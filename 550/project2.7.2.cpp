/***************************************************************
	
	Project I Chapter Seven - Access Control and Encapsulation
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Six.
	
	File Name:	project2.7.2.cpp
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
		friend double placement( const University& );		
		University() = default; 
				
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
	
	
	// 7.2.1 Friends
	double University::setCost(double costs)
	{
		cost = costs;
		return cost;
	}
	
	double placement( const University& university )
	{
		double placed;
		
		if(university.cost >= 10000 && university.cost < 20000)
			goto case1;
		else if(university.cost >= 20000 && university.cost < 25000)
			goto case2;
		else if(university.cost >= 25000)
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
		stetson.inputUniversity("Master of Science", "Business Analytics", 39, stetson.setCost(23040) );
		
		stetson.output();
		percentage = placement(stetson);
		cout << endl;
		cout << "The program places " << percentage << "% of graduates 3 months after graduation.";
		cout << endl;
						
			
										
		return 0;
	}


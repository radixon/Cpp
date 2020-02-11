/***************************************************************
	
	Project I Chapter Seven - Additional Class Features
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Six.
	
	File Name:	project2.7.3.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	using namespace std;
	
	
	class University
	{
		std::string degree;
		std::string program;
		int credits;
		// 7.3.1 mutable Data Members
		mutable double cost;
	public:
		University &setCost(double);		
		University() = default; 
		
		// 7.3.4 Friend Declarations and Scope
		friend double placement( const University& university )
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
		};
				
		void inputUniversity(string degree, string program, int credits, double value)
		{
			this->degree = degree;
			this->program = program;
			this->credits = credits;
			this->cost = value;	
		}
		
		void output()
		{
			std::cout << "Degree Level: " << degree << endl;
			std::cout << "Program: " << program << endl;
			std::cout << "Number of graduate: " << credits << endl;
			std::cout << "Estimated Cost of Program: " << cost << endl;
		}		
	};
	
	// 7.3.1 Making Members inline
	inline University &University::setCost(double value)
	{
		cost = value;
		// 7.3.2 Functions That Return *this
		return *this;
	}
	
				
	int main()
	{	
		double percentage;
		// 7.3.3 Class Types
		class University stetson;
		stetson.inputUniversity("Master of Science", "Business Analytics", 39, 17796 );
		
		stetson.output();
		percentage = placement(stetson);
		cout << endl;
		cout << "The program places " << percentage << "% of graduates 3 months after graduation.";
		cout << endl;
						
			
										
		return 0;
	}


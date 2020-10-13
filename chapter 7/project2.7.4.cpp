/***************************************************************
	
	Project I Chapter Seven - Class Scope
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Seven.
	
	File Name:	project2.7.4.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	using namespace std;
	
	// 7.4.1 Name Lookup for Class Member Declarations
	typedef double Value;
	class University
	{
		std::string degree;
		std::string program;
		int credits;
		
	public:
		University &setCost(double);		
		University() = default; 
		Value cost; 
		double placement(Value cost);
		
				
		void inputUniversity(string degree, string program, int credits)
		{
			this->degree = degree;
			this->program = program;
			this->credits = credits;				
		}
		
		void output()
		{
			std::cout << "Degree Level: " << degree << endl;
			std::cout << "Program: " << program << endl;
			std::cout << "Number of graduate: " << credits << endl;
			std::cout << "Estimated Cost of Program: " << cost << endl;
		}		
	};
	
	// 7.4 Scope and Members Defined outside the Class
	double University::placement(Value cost)
	{
		double placed;
	
		if(cost >= 10000 && cost < 20000)
			goto case1;
		else if(cost >= 20000 && cost < 25000)
			goto case2;
		else if(cost >= 25000)
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
	
	inline University &University::setCost(double money)
	{
		cost = money;
		return *this;
	}
	
				
	int main()
	{	
		double percentage;
		University stetson;
		stetson.inputUniversity("Master of Science", "Business Analytics", 39);
		stetson.setCost(17796);
		
		stetson.output();
		percentage = stetson.placement(stetson.cost);
		cout << endl;
		cout << "The program places " << percentage << "% of graduates 3 months after graduation.";
		cout << endl;
						
			
										
		return 0;
	}


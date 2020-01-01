/***************************************************************
	
	Project III Chapter Fourteen - Arithmetic and Relational Operators
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Fourteen.
	
	File Name:	project3.14.3.cpp
***************************************************************/
	#include <iostream>
	#include <memory>
	#include <string>
	
	class Engineer
	{
		// Overloaded stream Operator
		friend std::ostream& operator<<(std::ostream& ooutput, const Engineer& univ);
					
	public:	
	
		static const int DEFAULT_SIZE = 4;
		
		// Constructor
		Engineer(std::string school = "Mercer", int cap = DEFAULT_SIZE);
		
		// Copy Constructor
		Engineer(const Engineer& value);
		
		// Overloaded Assignment
		Engineer& operator=(Engineer& value);
		
		// Destructor
		~Engineer();
		
		// Insert
		void insert(const std::string& pro_language);
		
		// swap Funciton
		void swap(Engineer& lhs, Engineer& rhs)
		{
			using std::swap;
			swap(lhs.school, rhs.school);
			swap(lhs.used, rhs.used);
			swap(lhs.cap, rhs.cap);
			swap(lhs.pro_language, rhs.pro_language);			
		}
		
		// Equality Operators
		friend bool operator==(const Engineer& lhs, const Engineer& rhs);
		friend bool operator!=(const Engineer& lhs, const Engineer& rhs);
						
	private:
		std::string school;
		int used;
		int cap;
		std::string* pro_language;
		
	};
	
	// Constructor
	Engineer::Engineer(std::string s, int c)
	{
		this->school = s;
		this->cap = c;
		this->used = 0;
		this->pro_language = new std::string[c];
	}
	
	// Copy Constructor
	Engineer::Engineer(const Engineer& value)
	{
		std::cout << "Copy Constructor Called" << '\n';
		this->school = value.school;
		this->cap = value.cap;
		this->used = value.used;
		this->pro_language = new std::string[value.cap];
		
		copy(value.pro_language, value.pro_language + used, this->pro_language);
	}
	
	// Overloaded Assignment
	Engineer& Engineer::operator=(Engineer& value)
	{
		std::cout << "Overloaded Assignment Called" << '\n';
		
		swap(*this, value);
		return *this;
	}
	
	// Destructor
	Engineer::~Engineer()
	{
		std::cout << "Destructor Called" << '\n';
		
		delete[] pro_language;
	}
	
	//Inserting new values used to calculate factorial
	void Engineer::insert(const std::string& programs)
	{
		if (used == cap)
		{
			std::cout << "Capacity has been reached!" << '\n';
		}
		else
		{
			pro_language[used] = programs;
			used++;
		}
	}
	
	std::ostream& operator<<(std::ostream& ooutput, const Engineer& univ)
	{
		ooutput << "University: " << univ.school << "\nHas the following tools: "
				<< std::endl << "| ";
				
		for(int num = 0; num < univ.used; num++)
		{
			ooutput << univ.pro_language[num] + " | ";
		}
		
		return ooutput << std::endl;
	}
	
	// Equality Operators
	bool operator== (const Engineer& lhs, const Engineer& rhs)
	{
		return	(lhs.school == rhs.school &&
				lhs.used == rhs.used &&
				lhs.cap == rhs.cap &&
				lhs.pro_language ==  lhs.pro_language);
	}
	bool operator!= (const Engineer& lhs, const Engineer& rhs)
	{
		return !(lhs == rhs);
	}

				
				
	int main()
	{	
		
		Engineer datascience;
		
		datascience.insert("Python");
		datascience.insert("C++");
		datascience.insert("SQL");
		datascience.insert("R");
		std::cout << datascience << '\n';
		
		// What happens when the capacity is exceeded
		datascience.insert("MATLAB");
		
		std::cout << datascience << '\n';
		
		Engineer compscience("Georgia Tech", 5);
		compscience.insert("C++");
		compscience.insert("Java");
		compscience.insert("Python");
		compscience.insert("MATLAB");
		compscience.insert("R");
		
		std::cout << compscience << '\n';
		
		Engineer machine = compscience;
		std::cout << machine << '\n';
		
		// Calling an Equality Operator	
		std::cout << "Does machine == compscience" << '\n';
		if(machine == compscience)
			std::cout << "Yes" << '\n' << '\n';
		if(machine != compscience)
			std::cout << "No" << '\n' << '\n';
		
		std::cout << "Does machine == datascience" << '\n';
		if(machine == datascience)
			std::cout << "Yes" << '\n' << '\n';
		if(machine != datascience)
			std::cout << "No" << '\n' << '\n';		
			
		machine.operator=(datascience);
		std::cout << machine << '\n';

		return 0;
	}




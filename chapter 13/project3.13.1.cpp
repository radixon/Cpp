/***************************************************************
	
	Project III Chapter Thirteen - Copy, Assign, and Destroy
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Thirteen.
	
	File Name:	project3.13.1.cpp
***************************************************************/
	#include <iostream>
	#include <memory>
	#include <string>
	#include <vector>
	
	class Engineer
	{
		// [6] see GeeksforGeeks
		friend std::ostream& operator<<(std::ostream& ooutput, const Engineer& univ);
		
	public:	
	
		static const int DEFAULT_SIZE = 4;
		
		// Constructor
		Engineer(std::string school = "Mercer", int cap = DEFAULT_SIZE);
		
		// Copy Constructor[5] see GeeksforGeeks
		Engineer(const Engineer& value);
		
		// Overloaded Assignment[5] see GeeksforGeeks
		Engineer& operator=(const Engineer& value);
		
		// Destructor[5] see GeeksforGeeks
		~Engineer();
		
		// Insert
		void insert(const std::string& pro_language);
		
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
	Engineer& Engineer::operator=(const Engineer& value)
	{
		std::cout << "Overloaded Assignment Called" << '\n';
		
		if(this == &value)
		{
			return *this;
		}
		
		this->school = value.school;
		this->cap = value.cap;
		this->used = value.used;
		this->pro_language = new std::string[value.cap];
		
		for(int num = 0; num < used; num++)
		{
			pro_language[num] = value.pro_language[num];
		}
		
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
		
		machine = datascience;
		std::cout << machine << '\n';				
										
		return 0;
	}




/***************************************************************
	
	Project III Chapter Eleven - Using Associative Containers
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Eleven.
	
	File Name:	project3.11.1.cpp
***************************************************************/
	#include <iostream>
	#include <set>
	#include <map>
	
	void setDemo()
	{
		
		std::set<int> demo = {5, 10, 4, -1, 25, -3, 51, 10};
		
		std::cout << "Size: " << demo.size() << '\n';
		std::cout << "Max Size: " << demo.max_size() << '\n';
		for(const auto& value: demo)
		{
			std::cout << value << '\t';
		}
		std::cout << '\n' << '\n';
		
		
		demo.insert(-1);
		std::cout << "Size: " << demo.size() << '\n';
		std::cout << "Max Size: " << demo.max_size() << '\n';
		for(const auto& value: demo)
		{
			std::cout << value << '\t';
		}
		std::cout << '\n' << '\n';
		
		demo.insert(1);
		std::cout << "Size: " << demo.size() << '\n';
		std::cout << "Max Size: " << demo.max_size() << '\n';
		for(const auto& value: demo)
		{
			std::cout << value << '\t';
		}
		std::cout << '\n' << '\n';
		
		demo.erase(10);
		std::cout << "Size: " << demo.size() << '\n';
		std::cout << "Max Size: " << demo.max_size() << '\n';
		for(const auto& value: demo)
		{
			std::cout << value << '\t';
		}
		std::cout << '\n' << '\n';
		
		
		
	}
	
	int main()
	{	
		
		
		
		setDemo();
										
		return 0;
	}


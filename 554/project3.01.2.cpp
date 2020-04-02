/***************************************************************
	Project III The Big-O
	
	Demonstrate capabilities to execute concepts presented
	about the O(n log n).
	
	File Name:   project3.01.2.cpp
***************************************************************/
	#include <iostream>
	#include <algorithm>
	#include <array>
	
	int main() 
	{
		
		std::array<int,10> x_array = {96,6,14,19,80,20,87,54,76,8};
		std::array<int,10> y_array = {15,31,28,8,43,2,75,70,29,75};		
		std::array<int,20> z_array;
		
		std::sort(x_array.begin(),x_array.end());
		std::sort(y_array.begin(),y_array.end());
		
		std::merge(x_array.begin(),x_array.end(),y_array.begin(),y_array.end(),z_array.begin());
		
		std::cout << "The merged and sorted container results:\n";
		
		for(int i = 0; i < z_array.size(); i++)
		{
			std::cout << z_array[i] << "\t";
		}
				
		return 0; 
	}


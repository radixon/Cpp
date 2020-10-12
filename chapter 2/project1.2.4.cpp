/***************************************************************
	
	Project I Chapter Two - const Qualifier
	
	Demonstrate capabilities to execute concepts presented
	in Chapter One.
	
	File Name:	project1.2.4.cpp
***************************************************************/
	#include <iostream>
			
	int main()
	{
		// 2.4 const Qualifier
		constexpr double gravity{9.8};
		double mass;
		
		std::cout << "Enter Your Mass in kilograms" << '\t';
		std::cin >> mass;
		const double weight{mass*gravity};
		std::cout << "You weight  " << weight << " " 
					<< "Newtons" << '\n' << '\n';
		
		// 2.4.1 Reference to const
		const double &force = weight;
		double applied_friction{};
		double total_force{};
		
		std::cout << "Enter The Friction Caused by The Ground"
					<< " in Newtons" << '\t';
		std::cin >> applied_friction;
		total_force = applied_friction + force;
						
		std::cout << "It takes " << total_force << " "
					<< "Newtons to move you from rest." << '\n' << '\n';	
		
		// 2.4.2 Pointers and const
		const double *ptr_weight = &weight;
		double tension{};
		
		std::cout << "Enter The Tension Being Applied"
					<< '\t';
		std::cin >> tension;
		total_force = tension - (*ptr_weight);
		
		if(total_force > 0)
		{
			std::cout << "The " << -total_force << " "
					<< "Newtons applied will lift you off the ground." << '\n';
		}
				
		if(total_force < 0)
		{
			total_force = total_force * (-1);
			std::cout << "It will take another " << total_force << " "
					<< "Newtons to lift you off the ground." << '\n';
		}
				
		return 0;
	}


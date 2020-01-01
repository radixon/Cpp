/***************************************************************
	
	Project I Chapter Six - Overloaded Functions
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Six.
	
	File Name:	project2.6.4.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	using namespace std;
	
	
	// 6.4 Overloaded Functions
	void velocity()
	{
		cout << "This race is won with S P E E D!!!" << endl;
		cout << "Are you ready?" << endl;
	}
	
	// 6.4 Overloaded Functions
	double velocity(double delta_x, double delta_t)
	{	
		return delta_x/delta_t;
	}
	
			
	int main()
	{	
		double x1;
		double t_time;
		double avg_speed;
		
		velocity();
		
		cout << endl;
		cout << "How many kilometers did you travel today?" << '\t';
		cin >> x1;
		
		cout << endl;
		cout << "How many hours did you spend traveling today?" << '\t';
		cin >> t_time;
		
		avg_speed = velocity(x1, t_time);
		
		cout << endl;
		cout << "Your average speed was " << avg_speed << " km per hour" << endl;
		
		
			
										
		return 0;
	}


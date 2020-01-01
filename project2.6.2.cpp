/***************************************************************
	
	Project I Chapter Six - Argument Passing
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Six.
	
	File Name:	project2.6.2.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	using namespace std;
	
	
	// 6.2.2 Passing Arguments by Reference
	double displacement(double &x_0, double &x_1)
	{
		double delta_x;
		
		delta_x = x_1 - x_0;
		x_0 = 0;
		x_1 = delta_x;
		return delta_x;
	}
	
	// 6.2.1 Passing Arguments by Value
	double velocity(double delta_x, double delta_t) 
	{
		double delta_v;
		
		delta_t = delta_t / 60;
		
		delta_v = delta_x / delta_t;
		return delta_v;		
	}
	
		// 6.2.1 Passing Arguments by Value
	void a_value(double *n_value)
	{
		double x;
		x = *n_value;
		if(*n_value < 0)
			x = *n_value * (-1);
		
		*n_value = x;		
	}
	
			
	int main()
	{	
		double x0;
		double x1;
		double t_time;
		double v;
		
		cout << "What kilometer marker did your journey begin?" << '\t';
		cin >> x0;
		cout << endl;
		
		cout << "What kilometer marker did your journey end?" << '\t';
		cin >> x1;
		cout << endl;
		
		displacement(x0, x1);
		
		cout << "How many minutes did it take to reach the end of your journey?" << '\t';
		cin >> t_time;
		cout << endl;
		
		a_value(&x1);
		v = velocity(x1, t_time);
		
		cout << "You traveled " << x1 << " kilometers" << endl;
		cout << "It took you " << t_time << " minutes" << endl;
		cout << "Your average speed was " << v << " kilometers per hour" << endl;
			
										
		return 0;
	}


/***************************************************************
	
	Project I Chapter Fifteen - Defining Base and Derived Classes
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Fifteen.
	
	File Name:	project1.15.2.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	
	class MartialArtist{
		// 15.2.1 Access Control and Inheritance
		protected:
			double fight;
		public:
			virtual double Attack(double f)
			{
				fight = f / 3;
				return fight;
			}
	};

	// 15.2.2 Defining a Derived Class
	class JiuJitsu : public MartialArtist
	{
		public:
			JiuJitsu(){
				std::cout << "I am a Jiu Jitsu Practitioner." << '\n';
				std::cout << "The ground is my ocean," << '\n';
				std::cout << "I am a shark," << '\n';
				std::cout << "and you don't know how to swim!!!" << '\n';						
			}
	};
	
	// 15.2.2 Defining a Derived Class
	class Boxer : public MartialArtist
	{
		public:
			Boxer(){
				std::cout << "I am a Boxing Practitioner." << '\n';
				std::cout << "Everyone has a plan," << '\n';
				std::cout << "until they get punched in the face!!!" << '\n';						
			}
	};
		
	int main()
	{
		JiuJitsu gracie;
		std::cout << "Strength of Style: " << gracie.Attack(19.75);
		std::cout << '\n' << '\n';
		
		Boxer tyson;
		std::cout << "Strength of Style: " << tyson.Attack(12.9);
		std::cout << '\n' << '\n';
	
		
		return 0;
	}


/***************************************************************
	
	Project I Chapter Fifteen - OOP: An Overview
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Fifteen.
	
	File Name:	project1.15.1.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	
	class MartialArtist{
		public:
			double fight;
			// 15.1 Inheritance
			virtual double Attack(double f)
			{
				fight = f / 3;
			}
	};
	
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
		std::cout << "Strength of Style: " << gracie.Attack(31.35);
		std::cout << '\n' << '\n';
		
		Boxer tyson;
		std::cout << "Strength of Style: " << tyson.Attack(30.95);
		std::cout << '\n' << '\n';
	
		
		return 0;
	}


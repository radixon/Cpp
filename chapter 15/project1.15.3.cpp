/***************************************************************
	
	Project I Chapter Fifteen - Virtual Functions
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Fifteen.
	
	File Name:	project1.15.3.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	
	class MartialArtist{
		protected:
			double fight;
		public:
			virtual double Attack(double f)
			{
				fight = f / 3;
				return fight;
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
			
			// 15.3 The final and override Specifiers			
			double Attack(double f) override {	
				fight = f * 3 / 4;
				return fight; 
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
			
			// 15.3 The final and override Specifiers			
			double Attack(double f) final {	
				fight = f * 4 / 5;
				return fight; 
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


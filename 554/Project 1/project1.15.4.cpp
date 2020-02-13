/***************************************************************
	
	Project I Chapter Fifteen - Abstract Base Classes
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Fifteen.
	
	File Name:	project1.15.4.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	
	class MartialArtist{
		protected:
			double fight;
		public:
			// 15.4 Pure Virtual Functions
			virtual double Attack() = 0;
			MartialArtist(double f) {fight = f;	}
	};

	class JiuJitsu : public MartialArtist
	{
		public:
			// 15.4 A Derived Class Constructor Initializes Its Direct Base Class Only
			JiuJitsu(double f) : MartialArtist(f){
				std::cout << "I am a Jiu Jitsu Practitioner." << '\n';
				std::cout << "The ground is my ocean," << '\n';
				std::cout << "I am a shark," << '\n';
				std::cout << "and you don't know how to swim!!!" << '\n';						
			}
						
			double Attack() override {	
				return fight * 3 / 4; 
			}
	};
	
	class Boxer : public MartialArtist
	{
		public:
			// 15.4 A Derived Class Constructor Initializes Its Direct Base Class Only
			Boxer(double f) : MartialArtist(f){
				std::cout << "I am a Boxing Practitioner." << '\n';
				std::cout << "Everyone has a plan," << '\n';
				std::cout << "until they get punched in the face!!!" << '\n';						
			}
						
			double Attack() override {	
				return fight * 4 / 5; 
			}
	};
	
	void FightStyle(MartialArtist& fighter)
	{
		std:: cout << "Strength of Style: " << fighter.Attack() << '\n';
		std:: cout << '\n';
	}
		
	int main()
	{
		JiuJitsu gracie(19.75);
		FightStyle(gracie);
		
		Boxer tyson(19.75);
		FightStyle(tyson);
	
		
		return 0;
	}


/***************************************************************
	
	Project II Chapter Nine - Additional string Operations
	
	Demonstrate capabilities to execute concepts presented
	in Chapter Nine.
	
	File Name:	project2.9.5.cpp
***************************************************************/
	#include <iostream>
	#include <string>
	using namespace std;
	
	int main()
	{	
		string word;
		
		cout << "This program will search for the words in 'myfile.' " << endl;
		cout << "Please enter the word to be searched for:" << '\t';
		cin >> word;
		cout << endl;
		cout << endl;
		
		
		const string wordfile("When copying from a string, an optional starting position and count can be supplied.  The starting position must be less than or equal to the size of the given string.  The starting position must be less than or equal to the size of the given string.  If the position is greater than size, then the constructor throws an out_of_range exception.  Regardless of how many characters are requested, the library copies up to the size of the string, but no more.");
		int counter(0);
		string::size_type count = 0;
		// 9.5.3 string Search Operations
		while ( (count = wordfile.find(word, count) ) != string::npos)
		{
			++count;
			++counter;				
		}
		
		cout << word << " was found " << counter << " times!" << endl;
										
		return 0;
	}


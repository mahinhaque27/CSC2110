//==========================================================
//
// Title:      Vowel Checker
// Course:     CSC 2110
// Lab Number: 02
// Author:     Mahin Haque
// Date:       09/08/21
// Description: Reads in letter from user and sees if it is a vowel or not
//  
// 
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Declare Constants
bool isVowel(char x) {
	if (x == 'a' || x == 'e' || x == 'i' 
		|| x == 'o' || x == 'u') {
		return true;
	}
	else {
		return false;
	}
}
int check(bool x) {
	if (x == true) {
		cout << "Vowel";
		return 1;
	}
	else {
		cout << "Not Vowel";
		return 0;
	}
}
int main()
{
	// Variables
	char inp;;

	// Read in letter from user
	cout << "Enter in one letter: ";
	cin >> inp;

	// Check if input is vowel
	check(isVowel(inp));
	



	// Show application close
	cout << endl;
	cout << "\nEnd of my Application" << endl;

}

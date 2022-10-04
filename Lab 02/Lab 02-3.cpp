//==========================================================
//
// Title:      Array
// Course:     CSC 2110
// Lab Number: 02-3
// Author:     Mahin Haque
// Date:       09/12/21
// Description: Reads in a string from the user and then capitalizes it.
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

//Declare constants
const int ARRAY_SIZE = 500;

int main()
{
	// Variables
	string input;
	char word[ARRAY_SIZE];
	

	//Read in input
	cout << "Enter in a string: ";
	cin.getline(word, ARRAY_SIZE);

	//convert to uppercase
	for (int i = 0; i < ARRAY_SIZE; i++) {
		word[i] = toupper(word[i]);
	}
	//writes to screen
	cout << "Capitalized Word(s): " <<  word;
	cout << endl;
}

//==========================================================
//
// Title:      Sum of Digits in Integer
// Course:     CSC 2110
// Lab Number: 01
// Author:     Mahin Haque
// Date:       09/01/21
// Description:
//  This C++ program promts the user for an integer for the input then outputs
// the individual digits and the sum of those digits.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Declare Constants
const int ARRAY_SIZE = 4;

int main()
{
	
	// Declare variables
	int input;
	int digit;
	int sum = 0;
	int j = 0;

	int digits[ARRAY_SIZE];
	// Show application header
	cout << "Welcome to my Application!" << endl;
	cout << "--------------------------" << endl << endl;

	// Read from keyboard
	cout << "Enter a 4 digit number: ";
	cin >> input;
	cout << endl;

	// Write to screen
	while (input != 0) {
		digit = input % 10;
		//cout << digit << endl;
		sum = sum + digit;
		input = input / 10;
		
		digits[j] = digit;
		j = j + 1;

	}
	for (int i = ARRAY_SIZE - 1; i >= 0; i--) {
		cout << digits[i] << endl;

	}
	cout << endl;
	cout << "Sum of digits in number: " << sum << endl;
	
	// Show application close
	cout << "\nEnd of my Application" << endl;

}

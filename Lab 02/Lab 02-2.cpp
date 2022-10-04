//==========================================================
//
// Title:      Array
// Course:     CSC 2110
// Lab Number: 02-1
// Author:     Mahin Haque
// Date:       09/08/21
// Description: Declares array of size 50 and squares first 25 index values
//  and triples the last 25 index values.
// 
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"



int main()
{
	// Variables
	double alpha[50];
	for (int i = 0; i < 25; i++) {
		alpha[i] = pow(i,2);
		
	}
	for (int i = 25; i < 50; i++) {
		alpha[i] = i * 3;
	}

	for (int i = 0; i < 50; i++) {
		if (i > 0 && i < 9) {
			cout << alpha[i] << " ";
		} // Tried to print 10 elements per line but ran out of time 
		else {
			cout << alpha[i] << " ";
		}
		
	}




	// Show application close
	cout << "\nEnd of my Application" << endl;

}

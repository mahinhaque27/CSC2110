#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
using namespace std;


double findMax(double* p, double* q) {
	if (*p < *q) {
		return *q;
	}
	else {
		return *p;
	}
	
}

int main() {
	//Declare variables
	double x, y;
	double answer;
	double* p, * q;

	//Assign locations to pointers
	p = &x;
	q = &y;

	//Read in two integers from user
	cout << "Enter first integer: ";
	cin >> *p;

	cout << "Enter second integer: ";
	cin >> *q;

	//Run function and then write to screen the max value
	cout << "Max Value: " << findMax(p, q) << endl;

}
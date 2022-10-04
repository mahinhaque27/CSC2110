#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include <random> //For random functions
using namespace std;


template <class T>
T sumOfSequence(T sum, T x, int n) {
	sum = sum + 1;
	for (int i = 1; i < n + 1; i++) {
		sum = sum + (x * i);
		
	}
	return sum;
}


int main() {
	int sum = 0;
	int x = 2;
	int n = 2;
	cout << "Starting Sum: " << sum << endl << "Value of x: " << x << endl <<
		"Value of n: " << n << endl << "Final sum: " << sumOfSequence(sum, x, n) << endl;
}
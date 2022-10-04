#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
using namespace std;


int main() {
	int values;
	int* valArr;
	int *sum;
	sum = new int;
	*sum = 0;
	
	cout << "Enter the amount of values you want you want to add together: ";
	cin >> values;
	cout << endl;

	valArr = new int[values];

	for (int i = 0; i < values; i++) {
		cout << "Enter value " << i + 1 << ": ";
		cin >> valArr[i];
		
		
	}
	
	for (int i = 0; i < values; i++) {
		
		*sum = (*sum + *valArr);
		valArr++;
	}
	
	cout << "\nSum of integer values: " << *sum << endl;
}
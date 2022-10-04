#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
using namespace std;

void integerFlip(int&x,int&y) {
	int xCopy = x;
	x = y;
	y = xCopy;
}

int main() {
	int x = 10;
	int y = 3;

	cout << "Before swap: x = " << x << ", y = " << y << endl;

	integerFlip(x, y);

	cout << "After swap: x = " << x << ", y = " << y << endl;
}
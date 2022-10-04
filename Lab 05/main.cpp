
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include "rectangle.h"
#include "box.h"
using namespace std;

int main(){
	//Information for box 1
	Box box1 (5,2,3);
	box1.print();
	cout << "Area: " << box1.area();
	cout << "Volume: " << box1.volume() << endl;
	cout << endl;

	//Information for box 2
	Box box2(5, 2, 3);
	box2.print();
	cout << "Area: " << box2.area();
	cout << "Volume: " << box2.volume() << endl;
	cout << endl;
}
#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include "pointType.h"
#include "lineType.h"
using namespace std;


int main() {
	
	int xval1,yval1,xval2,yval2;

	cout << "Enter value for x1: ";
	cin >> xval1;
	 
	cout << "Enter value for y1: ";
	cin >> yval1;

	cout << "Enter value for x2: ";
	cin >> xval2;

	cout << "Enter value for y2: ";
	cin >> yval2;

	pointType p1(xval1, yval1);
	pointType p2(xval2, yval2);

	cout << "The distance between the two points (" << p1.getX() << ", " << p1.getY()
		<< ") and (" << p2.getX() << ", " << p2.getY() << ") is " << p2.distance(p1, p2) << endl;
	
	//lineType l1;                     // Cant get second class lineType to compile
	//l1.checkLine(p1, p2);


}
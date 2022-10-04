#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include "lineType.h"
using namespace std;

void lineType::checkLine(pointType p1, pointType p2) {
	double x1 = p1.getX();
	double x2 = p2.getX();
	double y1 = p1.getY();
	double y2 = p2.getY();

	if (x1 = x2) {
		cout << "The line is vertical" << endl;

	}
	else if (y1 = y2) {
		cout << "The line is horizontal" << endl;
	}
	else {
		cout << "The line is slanted" << endl;
	}
	
}

	


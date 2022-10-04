#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include "pointType.h"
using namespace std;

class lineType: public pointType {
public:
	void checkLine(pointType p1, pointType p2);
	lineType();
private:

};
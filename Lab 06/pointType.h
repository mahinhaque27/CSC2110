#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
using namespace std;

class pointType {
public:
	
	//Mutators
	void setX(int xVal);
	void setY(int yVal);
	
	

	//Accessors
	int getX();
	int getY();
	

	//Methods
	double distance(pointType p1,pointType p2);

	//Constructors
	pointType(int x, int y);

private:
	int x;
	int y;
	

};
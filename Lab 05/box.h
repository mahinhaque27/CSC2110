#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include "rectangle.h"
using namespace std;

class Box : public Rectangle {
private:
	double height;

public:
	//Mutator
	void setHeight(double h);

	//Accessor
	int getHeight() const;

	//Methods
	Box();
	Box(double l, double w, double h);
	double volume();
	void print();
	double area();

};
#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
using namespace std;

class Rectangle {
private:
	double length;
	double width;

public:
	//Mutators
	void setLength(double l);
	void setWidth(double w);

	//Accessors
	int getLength() const;
	int getWidth() const;

	//Methods
	Rectangle();
	Rectangle(double l, double w);
	double area();
	double perimeter();
	void print();
};
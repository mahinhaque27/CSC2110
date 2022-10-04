#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include "rectangle.h"
using namespace std;


//Mutators
void Rectangle::setLength(double l) {
	length = l;
}

void Rectangle::setWidth(double w) {
	width = w;
}

//Accessors
int Rectangle::getLength() const {
	return length;
}
int Rectangle::getWidth() const {
	return width;
}

//Methods
Rectangle::Rectangle() {

}
Rectangle::Rectangle(double l, double w) {
	setWidth(w);
	setLength(l);
}
double Rectangle::area() {
	return getLength() * getWidth();
}
double Rectangle::perimeter() {
	return 2 * getLength() + 2 * getWidth();
}
void Rectangle::print() {
	cout << "Length: " << getLength() << "\nWidth: " << getWidth << endl;
}

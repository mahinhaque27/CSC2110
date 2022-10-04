#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include "box.h"

using namespace std;

//Mutator
void Box::setHeight(double h) {
	 height = h;
}

//Accessor
int Box::getHeight() const {
	return height;
}

//Methods
Box::Box() {

}
Box::Box(double l, double w, double h) {	
	Rectangle::setLength(l);
	Rectangle::setWidth(w);
	Box::setHeight(h);		
}
double Box::volume() {
	return (Rectangle::getWidth() * Rectangle::getLength() * getHeight());
}
void Box::print() {
	cout << "Length: " << Rectangle::getLength() << "\nWidth: " << Rectangle::getWidth() <<"\nHeight: "  
		<< getHeight() << endl;
}
double Box::area() {
	return (Rectangle::getWidth() * Rectangle::getLength());
}


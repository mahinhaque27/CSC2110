#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include "pointType.h"
using namespace std;


//pointType mutators
void pointType::setX(int xVal) {
	x = xVal;
}
void pointType::setY(int yVal){
	y = yVal;
}

//pointType accessors
int pointType::getX() {
	return x;
}
int pointType::getY() {
	return y;
}

//pointType methods
double pointType::distance(pointType p1,pointType p2) {
	double x1 = p1.getX();
	double x2 = p2.getX();
	double y1 = p1.getY();
	double y2 = p2.getY();

	return sqrt(pow((x2-x1),2) + pow((y2-y1),2));
}

//pointType constructors
pointType::pointType(int x, int y) {
	pointType::setX(x);
	pointType::setY(y);
}
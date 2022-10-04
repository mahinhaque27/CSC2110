#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include <random> //For random functions
using namespace std;

class Rectangle {
public:
	void setLength(double l) {
		length = l;
	}
	double getLength() {
		return length;
	}
	void setWidth(double w) {
		width = w;
	}
	double getWidth(){
		return width;
	}
	Rectangle() {

	}
	Rectangle(double l, double w) {
		setLength(l);
		setWidth(w);
	}
	double area() {
		double area;
		area = getLength() * getWidth();
		return area;
	}
	double perimeter() {
		double perimeter;
		perimeter = (2 * getLength()) + (2 * getWidth());
		return perimeter;
	}
	void print() {
		cout << "Length: " << getLength() << endl;
		cout << "Width: " << getWidth() << endl;
	}
	virtual double volume() = 0 {

	}
private:
	double length;
	double width;
};

class Box : public Rectangle {
public:
	void setHeight(double h) {
		height = h;
	}
	double getHeight() {
		return height;
	}

	Box() {

	}
	Box(double l, double w, double h) : Rectangle(l,w) {
		setHeight(h);
	}
	double volume() {
		double volume;
		volume = getLength() * getWidth() * getHeight();
		return volume;
	}
	void print() {
		cout << "Length: " << getLength() << endl;
		cout << "Width: " << getWidth() << endl;
		cout << "Height: " << getHeight() << endl;
	}
	double area() {
		return Rectangle::area();
	}
private:
	double height;
};


int main() {
	Box b1(10,12,21);
	Box b2(6,4,3);

	cout << "Box 1 Information" << endl;
	cout << "------------------------" << endl;
	b1.print();
	cout << "Area: " << b1.area() << endl;
	cout << "Volume: " << b1.volume() << endl;

	cout << "\nBox 2 Information" << endl;
	cout << "------------------------" << endl;
	b2.print();
	cout << "Area: " << b2.area() << endl;
	cout << "Volume: " << b2.volume() << endl;
}
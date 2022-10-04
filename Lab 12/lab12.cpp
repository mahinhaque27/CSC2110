#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include <random> //For random functions
using namespace std;

//Shape base class
class Shape {
public:
	int x = 0;
	int y;

	Shape(int xVal, int yVal);
	Shape() {

	}
	void display();
	virtual void move(int xVal, int yVal) = 0;
	virtual void draw() = 0;

};

//Shape base class implementation
Shape::Shape(int xVal, int yVal) {
	x = xVal;
	y = yVal;
}


void Shape::display() {
	cout << "Value of x: " << x << endl;
	cout << "Value of y: " << y << endl;
}

void Shape::move(int xVal, int yVal) {

}

void Shape::draw() {

}

//Square derived class 
class Square :public Shape {
public:
	string color;

	void move(int xVal, int yVal);
	void draw();
	Square(string c);
};

//Square derived class implementation
void Square::move(int xVal, int yVal) {
	x = xVal;
	y = yVal;
}

void Square::draw() {
	cout << "Drawing " << color << " square" << endl;

}

Square::Square(string c) {
	color = c;
}

//Circle derived class
class Circle :public Shape {
public:
	string color;

	void move(int xVal, int yVal);
	void draw();
	Circle(string c);
};

//Circle class implementation
void Circle::move(int xVal, int yVal) {
	x = xVal;
	y = yVal;
}

void Circle::draw() {
	cout << "Drawing " << color << " circle" << endl;

}

Circle::Circle(string c) {
	color = c;
}

//Main function
int main() {
	int x, y;
	string c;

	//Square information
	cout << "Enter in the x-value for square: ";
	cin >> x;
	
	cout << "Enter in the y-value for square: ";
	cin >> y;

	cout << "Enter in the color of the shape: ";
	cin >> c;
	cout << endl;

	Square squ1(c);
	squ1.x = x;
	squ1.y = y;
	squ1.display();

	cout << endl;
	cout << "Enter in the new x-value for square: ";
	cin >> x;
	

	cout << "Enter in the new y-value for square: ";
	cin >> y;
	cout << endl ;
	
	squ1.x = x;
	squ1.y = y;
	squ1.display();
	squ1.draw();
	

	//Circle information
	cout << "\nEnter in the x-value for circle: ";
	cin >> x;

	cout << "Enter in the y-value for circle: ";
	cin >> y;

	cout << "Enter in the color of the shape: ";
	cin >> c;
	cout << endl;
	
	Circle cir1(c);
	cir1.x = x;
	cir1.y = y;
	cir1.display();
	

	cout << endl;
	cout << "Enter in the new x-value for circle: ";
	cin >> x;


	cout << "Enter in the new y-value for circle: ";
	cin >> y;
	cout << endl;

	cir1.x = x;
	cir1.y = y;
	cir1.display();
	cir1.draw();
}
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include <random> //For random functions
using namespace std;

class Complex {
public:
	Complex(int r = 0, int i = 0) {
		real = r;
		imagi = i;
	}

	Complex operator - (Complex const& obj) {
		Complex res;
		res.real = real - obj.real;
		res.imagi = imagi - obj.imagi;
		return res;
	}

	Complex operator / (Complex const& obj) {
		Complex res;
		res.real = (real * obj.real + imagi * obj.imagi) / (pow(obj.real,2) + pow(obj.imagi, 2));
		res.imagi = (-real * obj.imagi + imagi * obj.real) / (pow(obj.real, 2) + pow(obj.imagi, 2));
		return res;
	}

	void print() {
		cout << real << " + (" << imagi << "i)" << endl;
	}


private:
	float real;
	float imagi;

};

int main() {
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 - c2;
	c3.print();

	cout << endl;

	Complex c4 = c1 / c2;
	c4.print();

}
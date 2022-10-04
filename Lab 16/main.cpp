#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include <random> //For random functions
#include "CarType.h"
#include "DynamicArray.h"
using namespace std;


int main() {
	cout << "Dynamic Array!\n";
	cout << "------------------\n";

	CarType car1("Toyota","Camery",2007);
	CarType car2("Honda", "Accord", 2013);
	DynamicArray <CarType> ga(2);
	
}
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include "Account.cpp"
using namespace std;

int main() {
	//First account
	Account acc1;
	acc1.name = "Mahin";
	acc1.balance = 13.50;
	acc1.myMethod();      //Creates first account information
	acc1.deposit();
	cout << endl << endl;

	//Second account
	Account acc2;
	acc2.name = "Nabil";
	acc2.balance = 47;
	acc2.myMethod();      //Creates first account information
	acc2.withdrawl();
	cout << endl << endl;
}
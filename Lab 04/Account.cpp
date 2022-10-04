#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include "Account.h"
using namespace std;

//Account constructor
Account::Account() {
	cout << "Account Information" << endl;
	cout << "-----------------------------" << endl;
}

//Account methods
void Account::myMethod() {
	cout << "Account Name: " << name << endl;
	cout << "Current balance on account: " << balance << endl;
}
void Account::deposit() {
	balance = balance + 29;
	cout << "After depositing the money, your new balance is " << balance;
}
void Account::withdrawl() {
	balance = balance - 8;
	cout << "After withdrawing the money, your new balance is " << balance;
}
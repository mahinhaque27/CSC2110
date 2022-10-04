#pragma once
#include <string> // For string data type;
#include <iostream> // For cin, cout, and system
using namespace std;
// Declare classes
class Account {
public:
	string name;
	float balance = 0;

	Account();
	void myMethod();
	void deposit();
	void withdrawl();
};
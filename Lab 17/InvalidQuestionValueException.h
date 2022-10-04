#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;

using namespace std;

class InvalidQuestionValueException {
public:
	string what() {
		return message;
	}
	InvalidQuestionValueException(string m = "ERROR: Invalid value. See class documentation.") {
		message = m;
	}

private:
	string message;

};
#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include "InvalidQuestionValueException.h"
using namespace std;

class SAquestion {
public:
	void setText(string t);
	void setCorrectAnswer(string c);
	void setPoints(int p);
	string getText() const;
	string getCorrectAnswer() const;
	int getPoints() const;
	bool isCorrect(string a) const;
	SAquestion(string t, string c, int p);


private:
	string text;
	string correctAnswer;
	int points;



};
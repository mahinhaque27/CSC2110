#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include "SAquestion.h"
using namespace std;

void SAquestion::setText(string t) {
	text = t;
}

void SAquestion::setCorrectAnswer(string c) {
	correctAnswer = c;
}

void SAquestion::setPoints(int p) {
	points = p;
}

string SAquestion::getText() const {
	return text;
}

string SAquestion::getCorrectAnswer() const {
	return correctAnswer;
}

int SAquestion::getPoints() const {
	return points;
}

bool SAquestion::isCorrect(string a) const {
	if (a == getCorrectAnswer()) {
		cout << "Your answer is correct!" << endl;
		return true;
		
	}
	else {
		cout << "Your answer is incorrect!" << endl;
		return false;
	}
}

SAquestion::SAquestion(string t, string c, int p) {
	setText(t);
	setCorrectAnswer(c);
	setPoints(p);
};
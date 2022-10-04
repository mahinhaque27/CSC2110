#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include "SAquestion.h"
#include "InvalidQuestionValueException.h"
using namespace std;

int main() {
	try {
		string input;
		string question = ""; //What is Obama's last name?
		string correctAnswer = "Obama";
		int points = 2;

		//Question 1
		if (question == "") {
			throw InvalidQuestionValueException("Invalid value: Question's text cannot be empty");
		}
		else if (correctAnswer == "") {
			throw InvalidQuestionValueException("Invalid value: Question's answer cannot be empty");
		}
		else if (points < 1 || points > 10) {
			throw InvalidQuestionValueException("Invalid value: Question's points must be between 1-10 inclusive ");
		}

		SAquestion q1(question,correctAnswer,points);
		cout << q1.getText() << endl;
		cin >> input;
		q1.isCorrect(input);


		//Question 2
		question = "Whos is the Dark Knight?";
		correctAnswer = ""; //Batman
		points = 2;

		if (question == "") {
			throw InvalidQuestionValueException("Invalid value: Question's text cannot be empty");
		}
		else if (correctAnswer == "") {
			throw InvalidQuestionValueException("Invalid value: Question's answer cannot be empty");
		}
		else if (points < 1 || points > 10) {
			throw InvalidQuestionValueException("Invalid value: Question's points must be between 1-10 inclusive ");
		}

		SAquestion q2(question, correctAnswer, points);
		cout << q2.getText() << endl;
		cin >> input;
		q2.isCorrect(input);

		//Question 3
		question = "What is the fastest land animal in the world?";
		correctAnswer = "cheetah";
		points = 11; //2

		if (question == "") {
			throw InvalidQuestionValueException("Invalid value: Question's text cannot be empty");
		}
		else if (correctAnswer == "") {
			throw InvalidQuestionValueException("Invalid value: Question's answer cannot be empty");
		}
		else if (points < 1 || points > 10) {
			throw InvalidQuestionValueException("Invalid value: Question's points must be between 1-10 inclusive ");
		}

		SAquestion q3(question, correctAnswer, points);
		cout << q3.getText() << endl;
		cin >> input;
		q3.isCorrect(input);



	}
	catch (InvalidQuestionValueException obj) {
		cout << obj.what() << endl;
	}

}

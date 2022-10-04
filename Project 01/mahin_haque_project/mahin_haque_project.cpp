//==========================================================
//
// Title:      Final Project - Bank Account System
// Course:     CSC 2110
// Author:     Patrick Ducusin
// Date:       12/06/2021
// Description: 
// We are going to be making a micro bank account
// system which can manipulate the accounts of a single client.
// The user of this program can create a client (with an ID 
// number, first name, and last name) and the client can add 
// and remove bank accounts. The user will be presented options 
// that they can do with their bank accounts. Simultaneously, 
// the program will keep track of the user's attempted actions
// via a log, and when the user is done with the program, they
// can choose to exit the program which will display the log's 
// records.
// 
//==========================================================
#include <iostream>
#include "BankSystem.h"
using namespace std; // To avoid writing std::

int main()
{
	// declare variables for the client's ID, first name, and last name
	// and get user input for these variables
	int userID;
	string userFirstName, userLastName;

	cout << "Please enter an ID: ";
	cin >> userID;

	cout << "Please enter your first name: ";
	cin >> userFirstName;

	cout << "Please enter your last name: ";
	cin >> userLastName;

	BankSystem myBank(userID, userFirstName, userLastName);
	myBank.start();
}
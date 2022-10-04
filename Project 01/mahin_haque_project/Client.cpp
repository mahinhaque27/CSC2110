#include <iostream>
#include <string>
#include "Client.h"
using namespace std;

// setter for user ID
void Client::setID(int i) {
	id = i;
}

// getter for userID
int Client::getID() const {
	return id;
}

// setter for the user's name
void Client::setName(string fn, string ln) {
	firstName = fn;
	lastName = ln;
}

// getters for first and last names
string Client::getFirstName() const {
	return firstName;
}

string Client::getLastName() const {
	return lastName;
}

// constructor that will initialize the id, first, and last name of the user
Client::Client(int i, string fn, string ln) {
	id = i;
	firstName = fn;
	lastName = ln;
}
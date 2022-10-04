#pragma once
#include <iostream>
#include <string>
#include "CheckingAccount.h"
#include "SavingAccount.h"

// Client class
class Client {
public:
	CheckingAccount* checking;
	SavingAccount* saving;
	void setID(int i);
	int getID() const;
	void setName(std::string fn, std::string ln);
	std::string getFirstName() const;
	std::string getLastName() const;
	Client(int i, std::string fn, std::string ln);

private:
	int id;
	std::string firstName;
	std::string lastName;

};
#pragma once
#include <iostream>
#include "Account.h"

// this is a derived class from the abstract class "Account"
class CheckingAccount : public Account {
public:
	float getBalance() const;
	void deposit(float amount);
	void withdraw(float amount);
	CheckingAccount(float amount);

};
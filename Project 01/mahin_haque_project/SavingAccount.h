#pragma once
#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"

// SavingAccount is a derived class from the abstract class "Account"
class SavingAccount : public Account {
public:
	float getBalance() const;
	void deposit(float amount);
	void setSavingRate(float rate);
	float getSavingRate() const;
	void transfer(CheckingAccount* &checkingAcc, float amount);
	SavingAccount(float amount, float rate);
	

private:
	float SavingRate;

};
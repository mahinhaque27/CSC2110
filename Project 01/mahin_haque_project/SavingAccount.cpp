#include <iostream>
#include "SavingAccount.h"
using namespace std;

// implementation file for SavingAccount class

// return saving account balance
float SavingAccount::getBalance() const {
	return balance;
}

// the deposit method will increase saving account balance by user's input
void SavingAccount::deposit(float amount) {
	balance = balance + abs(amount);
}

// set method for SavingRate
void SavingAccount::setSavingRate(float rate) {
	SavingRate = rate;
}

// get method for saving rate
float SavingAccount::getSavingRate() const {
	return SavingRate;
}

// this method will initiate a transfer of money from savings to checkings
// it will not transfer if transfer amount exceeds savings amount
// we will use methods from base class "Account" to access balance of checkings
void SavingAccount::transfer(CheckingAccount* &checkingAcc, float amount) {
	if (amount > this->getBalance()) {
		cout << "It cannot withdraw an amount greater than the balance. No changes were done to the balance" << endl;
		balance = balance + 0;
	}
	else {
		checkingAcc->deposit(abs(amount));
		balance = balance - abs(amount);
	}
}

SavingAccount::SavingAccount(float amount, float rate) {
	balance = amount;
	SavingRate = rate;
}


#include <iostream>
#include "CheckingAccount.h"
using namespace std;

// Implementation file for Checking Account class

// the withdraw method will decrease balance by the user's input
// however, it will not decrease amount if withdraw amount exceeds balance

// This function will return the checking account balance
float CheckingAccount::getBalance() const {
	return balance;
}

// the deposit method will increase checking balance by user's input
void CheckingAccount::deposit(float amount) {
	balance = balance + abs(amount);
}

void CheckingAccount::withdraw(float amount) {
	if (amount > balance)
		cout << "It cannot withdraw an amount greater than the balance. No changes were done to the balance" << endl;
	else
		balance = balance - abs(amount);
}

// constructor to initialize balance of checking account
CheckingAccount::CheckingAccount(float amount) {
	balance = amount;
}
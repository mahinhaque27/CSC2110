#include <iostream>
#include <sstream>
#include "BankSystem.h"
using namespace std;

void BankSystem::start() {

	int userChoice; // display options to user and get their choice on what to do with their bank
	bool exit = false;
	while (exit == false) {
		cout << "\n= Menu =" << endl;
		cout << "1. Add a Checking account \n2. Remove Checking Account \n3. Deposit into Checking Account" << endl;
		cout << "4. Withdraw from a Checking Account \n5. Add a Savings account \n6. Remove Savings Account" << endl;
		cout << "7. Deposit into Savings account \n8. Transfer from Savings to Checking account \n9. Exit" << endl;
		cout << "Choose an option[1-9]: ";
		cin >> userChoice;

		switch (userChoice) {
		case 1:  // call AddCheckingDialogue
			AddCheckingDialogue();
			break;

		case 2: // call RemoveCheckingDialogue
			RemoveCheckingDialogue();
			break;

		case 3: // call DepositCheckingDialogue
			DepositCheckingDialogue();
			break;

		case 4: // call WithdrawCheckingDialogue
			WithdrawCheckingDialogue();
			break;

		case 5: // call AddSavingDialogue
			AddSavingDialogue();
			break;

		case 6: // call RemoveSavingDialogue
			RemoveSavingDialogue();
			break;

		case 7: // call DepositSavingDialogue
			DepositSavingDialogue();
			break;

		case 8: // call TransferDialogue
			TransferDialogue();
			break;

		case 9: // Display the log to user and then exit menu
			cout << "\nAll log messages: " << endl;
			for (int i = 0; i < log.size(); i++) {
				cout << log[i] << endl;
			}
			exit = true;
			break;

		default:
			cout << "Error: Option is invalid. Please enter a valid option." << endl;
		}

	}

	return;
}

void BankSystem::AddCheckingDialogue() {
	// if oneClient's checking pointer is NOT null, display that client already
	// has a checking account and write an invalid overwrite statement in the log
	if (oneClient.checking != NULL) {
		cout << "\nThe client already has a checking account." << endl;
		log.push_back("Invalid attempt to overwrite a checking account.");
		return;
	}

	// if oneClient's checking pointer IS null, ask for initial balance and 
	// create a checking member dynamically and set it in checking member of the client
	else {
		float initialAmount;
		cout << "\nWhat is the initial balance of your checking account?: $";
		cin >> initialAmount;

		// creating new checking member dynamically using the oneClient's checking pointer
		oneClient.checking = new CheckingAccount(initialAmount);
		cout << "You now have $" << oneClient.checking->getBalance() << " in your checking account." << endl;

		// log that checking account was successfully created
		log.push_back("Checking account successfully created.");
	}
	return;
}


void BankSystem::RemoveCheckingDialogue() {
	// if oneClient's checking pointer IS null, display that client does not have
	// a checking account to remove and write an invalid removal statement in the log
	if (oneClient.checking == NULL) {
		cout << "\nThe client does not have a checking account." << endl;
		log.push_back("Invalid attempt to remove a non-existing checking account.");
		return;
	}

	// if oneClient's checking pointer is NOT null, remove checking account from memory
	// and set oneClient.checking to null
	else {
		delete oneClient.checking;
		oneClient.checking = NULL;

		// log that checking account was successfully removed
		log.push_back("Checking account successfully remove.");
	}
	return;
}

void BankSystem::DepositCheckingDialogue() {
	// if oneClient's checking pointer IS null, display that client does not have a
	// checking account and log an invalid deposit attempt to checking
	if (oneClient.checking == NULL) {
		cout << "\nThe client does not have a checking account." << endl;
		log.push_back("Invalid attempt to deposit to a non-existing checking account.");
		return;
	}

	// if oneClient's checking pointer is NOT null, ask for deposit amount and add to checking
	else {
		float depositAmount;
		cout << "\nHow much would you like to deposit?: $";
		cin >> depositAmount;

		oneClient.checking->deposit(depositAmount);
		cout << "You now have $" << oneClient.checking->getBalance() << " in your checking account." << endl;

		// stringstream will add the deposit amount to logMessage, then we will concantenate
		// logMessage with the addAmount.str along with the rest of the statement
		string logMessage = "$";
		stringstream userAmount;
		userAmount << depositAmount << logMessage;
		logMessage = userAmount.str() + " successfully deposited in checking account.";

		// log that deposit was successful
		log.push_back(logMessage);
	}
	return;
}

void BankSystem::WithdrawCheckingDialogue() {
	// if oneClient's checking pointer IS null, display that client does not have a
	// checking account and log that
	if (oneClient.checking == NULL) {
		cout << "\nThe client does not have a checking account." << endl;
		log.push_back("Invalid attempt to withdraw from a non-existing checking account.");
		return;
	}

	// if oneClient's checking pointer is NOT null, ask for withdraw amount and subtract
	// it from checking balance. 
	else {
		float withdrawAmount;
		cout << "\nHow much would you like to withdraw?: $";
		cin >> withdrawAmount;
		oneClient.checking->withdraw(withdrawAmount);
		cout << "You now have $" << oneClient.checking->getBalance() << " in your checking account." << endl;

		// stringstream will add the withdraw amount to logMessage, then we will concantenate
		// logMessage with the addAmount.str along with the rest of the statement
		string logMessage = "$";
		stringstream userAmount;
		userAmount << withdrawAmount << logMessage;
		logMessage = userAmount.str() + " successfully withdrawn from checking account.";
		log.push_back(logMessage);
	}
	return;
}

void BankSystem::AddSavingDialogue() {
	// if oneClient's savings pointer is NOT null, display that client already
	// has a saving account and write an invalid overwrite statement in the log
	if (oneClient.saving != NULL) {
		cout << "\nThe client already has a savings account." << endl;
		log.push_back("Invalid attempt to overwrite a savings account.");
		return;
	}

	// if oneClient's saving pointer IS null, ask for initial balance and 
	// create a savings member dynamically and set it in savings member of the client
	else {
		float initialAmount, newRate;
		cout << "\nWhat is the initial balance of your savings account?: $";
		cin >> initialAmount;

		cout << "\nWhat is the saving rate of your savings account?: ";
		cin >> newRate;

		// creating new savings member dynamically with the oneClient's savings pointer
		oneClient.saving = new SavingAccount(initialAmount, newRate);

		cout << "You now have $" << oneClient.saving->getBalance() << " in your savings account ";
		cout << "with an account rate of " << oneClient.saving->getSavingRate() << "%." << endl;

		// log that savings account was successfully created
		log.push_back("Savings account successfully created.");
	}
	return;
}

void BankSystem::RemoveSavingDialogue() {
	// if oneClient's saving pointer IS null, display that client does not have
	// a saving account to remove and write an invalid removal statement in the log
	if (oneClient.saving == NULL) {
		cout << "\nThe client does not have a savings account." << endl;
		log.push_back("Invalid attempt to remove a non-existing savings account.");
		return;
	}

	// if oneClient's savings pointer is NOT null, remove savings account from memory
	// and set oneClient.savings to null
	else {
		delete oneClient.saving;
		oneClient.saving = NULL;

		// log that savings account was successfully removed
		log.push_back("Savings account successfully remove.");
	}
	return;
}

void BankSystem::DepositSavingDialogue() {
	// if oneClient's savings pointer IS null, display that client does not have a
	// savings account and log an invalid deposit attempt to savings
	if (oneClient.saving == NULL) {
		cout << "\nThe client does not have a savings account." << endl;
		log.push_back("Invalid attempt to deposit to a non-existing savings account.");
		return;
	}

	// if oneClient's checking pointer is NOT null, ask for deposit amount and add to checking
	else {
		float depositAmount;
		cout << "\nHow much would you like to deposit?: $";
		cin >> depositAmount;

		oneClient.saving->deposit(depositAmount);
		cout << "You now have $" << oneClient.saving->getBalance() << " in your savings account." << endl;

		// stringstream will add the deposit amount to logMessage, then we will concantenate
		// logMessage with the addAmount.str along with the rest of the statement
		string logMessage = "$";
		stringstream userAmount;
		userAmount << depositAmount << logMessage;
		logMessage = userAmount.str() + " successfully deposited in savings account.";

		// log that deposit was successful
		log.push_back(logMessage);
	}
	return;
}

void BankSystem::TransferDialogue() {
	// if oneClient's savings pointer IS null, display that client does not have a
	// savings account and log an invalid attempt to use a non-existing savings account
	if (oneClient.saving == NULL) {
		cout << "\nThe client does not have a savings account." << endl;
		log.push_back("Invalid attempt to use a non-existing savings account.");
		return;
	}

	// if oneClient's checking pointer IS null, display that client does not have a
	// checking account and log an invalid attempt to use a non-existing checking account
	else if (oneClient.checking == NULL) {
		cout << "\nThe client does not have a checking account." << endl;
		log.push_back("Invalid attempt to use a non-existing checking account.");
		return;
	}

	// If savings and checking are NOT null, ask for the transfer amount, then
	// withdraw it from the savings and add it to checking. Log the amount transferred.
	else {
		float transferAmount;
		cout << "\nHow much would you like to transfer from your savings to your checking?";
		cin >> transferAmount;

		oneClient.saving->transfer(oneClient.checking, transferAmount);
		cout << "You now have $" << oneClient.saving->getBalance() << " in your savings account." << endl;
		cout << "You now have $" << oneClient.checking->getBalance() << " in your checking account." << endl;
		string logMessage = "$";
		stringstream userAmount;
		userAmount << transferAmount << logMessage;
		logMessage = userAmount.str() + " successfully transferred from savings to checking account.";

	}
	return;
}

BankSystem::BankSystem(int i, string fn, string ln) : oneClient(i, fn, ln) {

}
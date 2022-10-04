//==========================================================
//
// Title:      Bank Account info Using Classes
// Course:     CSC 2110
// Lab Number: 03
// Author:     Mahin Haque
// Date:       09/13/21
// Description: 
//  Displays the name and balance of bank account and deposits or withdraws from
// the balance.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
using namespace std;

using namespace std; // So "std::cout" may be abbreviated to "cout"

// Declare classes
class Account {
	public:
		string name;
		float balance = 0;
		
		Account() {
			cout << "Account Information" << endl;
			cout << "------------------------------" << endl;
		}
		void myMethod() {
			cout << "Account Name: " << name << endl;
			cout << "Current balance on account: " << balance << endl;
		}
		void deposit() {
			balance = balance + 29;
			cout << "After depositing the money, your new balance is " << balance;
		}
		void withdraw() {
			balance = balance - 8;
			cout << "After withdrawing the money, your new balance is " << balance;
		}
};


int main()
{
	// First account
	Account acc1;
	acc1.name = "Mahin";
	acc1.balance = 13.50;  //Creates first account information using methods
	acc1.myMethod();
	acc1.deposit();

	cout << endl << endl;
	
	// Second account
	Account acc2;
	acc2.name = "Nabil";
	acc2.balance = 47;   //Creates second account information using methods
	acc2.myMethod();
	acc2.withdraw();


	cout << endl << endl;
	

}

#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include <vector>
using namespace std;


void bubbleSort(vector<double>& list) {
	double temp;

	for (int iteration = 1; iteration < list.size(); iteration++) {
		for (int index = 0; index < list.size() - iteration; index++) {
			if (list[index] > list[index + 1]) {
				temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
			}
		}

	}
}

int seqSearch(vector<double>& list, double searchItem) {
	int loc;
	bool found = false;
	loc = 0;


	while (loc < list.size() && !found) {
		if (list[loc] == searchItem) {
			found = true;
		}
		else {
			loc++;
		}

		
	}
	if (found == true) {

		return loc;
	}
	else {

		return -1;
	}
}

int main() {
	
	//Variables and vector
	bool loop = true;
	vector<double> vecList;
	double input;
	double searchVal;

	cout << "Searching App!" << endl;
	cout << "-----------------" << endl;

	//Loop until negative value is entered
	while (loop == true) {
		cout << "Enter a positive number (or a negative number to stop): ";
		cin >> input;

		if (input < 0) {
			loop = false;
		}
		else {
			vecList.push_back(input);
		}

			
	}
	cout << endl;

	//Sort values in vector
	bubbleSort(vecList);


	//Print out values given from user
	cout << "List of Values:" << endl;
	for (int i = 0; i < vecList.size(); i++) {
		cout << vecList[i] << " ";
	}
	cout << endl;

	//Look for value in vector 
	cout << "Search for a value in the list: ";
	cin >> searchVal;

	
	int location = seqSearch(vecList, searchVal);
	//cout << location;

	if (location == -1) {
		cout << "The element was not found using sequential search" << endl;
	}
	else {
		cout << "The element was found at vector index " << location << endl;
	}


	cout << endl;
}
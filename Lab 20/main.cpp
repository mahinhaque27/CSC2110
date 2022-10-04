#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include <vector>
using namespace std;

void insertionSort(vector<float>& list) {
	int firstOutOfOrder, location;
	float temp;

	for (firstOutOfOrder = 1; firstOutOfOrder < list.size(); firstOutOfOrder++) {
		if (list[firstOutOfOrder] < list[firstOutOfOrder - 1]) {
			temp = list[firstOutOfOrder];
			location = firstOutOfOrder;

			do {
				list[location] = list[location - 1];
				location--;
			} while (location > 0 && list[location - 1] > temp);

			list[location] = temp;


		}
	}
}

int binarySearch(vector<float>& list,int listLength, float searchItem) {
	int first = 0;
	int last = listLength - 1;
	int mid;

	bool found = false;
	while (first <= last && !found) {
		mid = (first + last) / 2;


		if (list[mid] == searchItem) {
			found = true;
		}
		else if (list[mid] > searchItem) {
			last = mid - 1;
		}
		else {
			first = mid + 1;
		}
	}

	if (found) {
		return mid;
	}
	else {
		return -1;
	}
}

int main() {
	bool loop = true;
	vector<float> vecList;
	float input;
	float searchVal;

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
	insertionSort(vecList);


	//Print out values given from user
	cout << "List of Values:" << endl;
	for (int i = 0; i < vecList.size(); i++) {
		cout << vecList[i] << " ";
	}
	cout << endl;

	//Look for value in vector 
	cout << "Search for a value in the list: ";
	cin >> searchVal;


	int location = binarySearch(vecList,vecList.size(), searchVal);
	
	

	if (location == -1) {
		cout << "The element was not found using binary search" << endl;
	}
	else {
		cout << "The element was found at vector index " << location << endl;
		//When searching for an element that is in the vector the the output returns nothing
		//and the cursor is flashing
	}
	cout << endl;



}
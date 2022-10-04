#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
using namespace std;

const int ARRAY_SIZE = 10;

int sum(const int array[], const int size);
int recursiveSum(const int array[], const int size,const int position);
int recursiveMax(const int array[], const int size, const int position);
int recursiveMin(const int array[], const int size, const int position);

int main() {
	int arr[ARRAY_SIZE] = {21,54,11,87,33,65,98,17,11,31};

	cout << "Recursive Functions!" << endl;
	cout << "---------------------" << endl;

	//Prints out array of values
	cout << "[ ";
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;

	cout << "Sum: " << sum(arr,ARRAY_SIZE) << endl;
	cout << "Recursive Sum: " << recursiveSum(arr, ARRAY_SIZE, 0) << endl;
	cout << "Recursive Max: " << recursiveMax(arr, ARRAY_SIZE, 0) << endl;
	cout << "Recursive Min: " << recursiveMin(arr, ARRAY_SIZE, 0) << endl;
}

int sum(const int array[], const int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + array[i];
	}
	return sum;
}

int recursiveSum(const int array[], const int size, const int position) {
	if (position >= size) {
		return 0;

	}
	else {
		return recursiveSum(array,size, position + 1) + array[position];
	}
}

int recursiveMax(const int array[], const int size, const int position) {
	if (position >= size) {
		return array[0];

	}
	else {
		return max(array[position],recursiveMax(array,size,position + 1));
	}
}

int recursiveMin(const int array[], const int size, const int position) {
	if (position >= size) {
		return array[0];

	}
	else {
		return min(array[position], recursiveMin(array, size, position + 1));
	}
}
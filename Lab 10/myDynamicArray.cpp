#include <iostream>
using namespace std;

void fillUp(int data[], int length);
void showArray(int values[], int size);

int main() {
	int size = 0;
	//Declare a pointer to a dynamic array
	int* myArr;

	cout << "How many values: ";
	cin >> size;

	//Create the dynamic array
	myArr = new int[size];

	//Call fillup() function with the dynamic array
	fillUp(myArr, size);

	cout << "You entered " << size << " numbers:\n";

	//Call showArray() function with the dynamic array
	showArray(myArr, size);

	//Delete the dynamic array
	delete[]myArr;
	




}
void fillUp(int data[], int length) {
	cout << "Enter " << length << " numbers\n";
	for (int i = 0; i < length; i++) {
		cin >> data[i];
	}
}

void showArray(int values[], int size) {
	for (int i = 0; i < size; i++) {
		cout << values[i] << endl;
	}
}
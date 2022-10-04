#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include <random> //For random functions
using namespace std;

//CLass "Timer" and its definition(s) (Part a)
class Timer {
public:
	Timer();
	Timer(int h, int m);
};
Timer::Timer(){

}
Timer::Timer(int h,int m){
	int hour = h;
	int minute = m;
	cout << "Hour: " << hour << endl;
	cout << "Minute: " << minute << endl;
}


//Fuctions (Part b)
int randArray(int n) {
	int *newArr = new int[n];

	for (int i = 0; i < n; i++) {
		newArr[i] = (rand() % 10) + 1;
	}
	return *newArr;
}


//Main
int main() {
	//Part a
	Timer* obj1 = new Timer(10, 20);
	

	//Part c
	randArray(100);
	
	//delete[] newArr1;  (couldn't figure out how to delete array)

	

}
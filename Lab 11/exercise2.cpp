#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;
#include <random> //For random functions
using namespace std;

class Student {
public:
	string name;
	int id;
	int mark1;
	int mark2;
	int mark3;
	Student();
};
Student::Student() {

}
void studentInfo(Student* s) {
	//Read in information from user
	cout << "Enter a name: ";
	cin >> s->name;

	cout << "\nEnter the student's ID: ";
	cin >> s->id;

	cout << "\nEnter in 1st mark: ";
	cin >> s->mark1;

	cout << "\nEnter in 2nd mark: ";
	cin >> s->mark2;

	cout << "\nEnter in 3rd mark: ";
	cin >> s->mark3;

	//Print out information
	cout << "\nName: " << s->name << endl;
	cout << "ID: " << s->id << endl;
	cout << "Mark 1: " << s->mark1 << endl;
	cout << "Mark 2: " << s->mark2 << endl;
	cout << "Mark 3: " << s->mark3 << endl;

}

int main() {
	//Create object and pointer to object
	Student* s1;
	Student stu1;
	s1 = &stu1;

	//Call function
	studentInfo(s1);

	
}
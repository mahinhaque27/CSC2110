#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type;

using namespace std;

class Student {
public:
	void setFirstname(string f) {
		firstname = f;
	}

	void setLastname(string l) {
		lastname = l;
	}

	string getFirstname() const {
		return firstname;
	}


	string getLastname() const {
		return lastname;
	}

	Student() {

	}

	Student(string f, string l) {
		setFirstname(f);
		setLastname(l);
	}
private:
	string firstname;
	string lastname;
};

class NodeType {
public:
	Student data;
	NodeType* next;

	NodeType() {

	}

};

class LinkedListType {
public:
	bool isEmpty() const {
		if (first == nullptr && last == nullptr) {
			return true;
		}
		else {
			return false;
		}
	}

	int getSize() const {
		return size;
	}

	void display() const {
		NodeType* current;
		current = first;
		while (current != nullptr) {
			cout << current->data.getFirstname() << " ";
			cout << current->data.getLastname() << endl;
			current = current->next;
		}
	}

	void addLast(Student studentData) {
		NodeType* newNode = new NodeType();
		newNode->data = studentData;

		if (isEmpty()) {
			first = newNode;
			last = newNode;
		}
		else {
			last->next = newNode;
			last = newNode;
		}

		size++;

	}

	void addFirst(Student studentData) {
		NodeType* newNode = new NodeType();
		newNode->data = studentData;

		if (isEmpty()) {
			first = newNode;
			last = newNode;
		}
		else {
			newNode->next = first;
			first = newNode;
		}
		size++;
	}

	Student getFirst() const {
		
		try {
			if (isEmpty()) {
				throw "ERROR";
			}
			else {
				return first->data;
			}
		}
		catch (string s) {
			cout << "The list is empty" << endl;
		}
	}

	Student getLast() const {
		
		try {
			if (isEmpty()) {
				throw "ERROR";
			}
			else {
				return last->data;
			}
		}
		catch (string s) {
			cout << "The list is empty" << endl;
		}
	}

	LinkedListType() {
		size = 0;
		first = nullptr;
		last = nullptr;
	}
private:
	int size;
	NodeType* first;
	NodeType* last;


};

int main() {
	cout << "Linked List App!" << endl;
	cout << "-----------------------" << endl;

	Student s0("Wendy", "Lawson");
	Student s1("Clark", "Kent");
	Student s2("Bruce", "Wayne");
	Student s3("Peter", "Parker");
	LinkedListType llt;

	llt.addFirst(s0);
	llt.addFirst(s1);
	llt.addFirst(s2);
	llt.addFirst(s3);

	llt.display();

	
	Student first = llt.getFirst();
	Student last = llt.getLast();

	cout << "First element: " << first.getFirstname() << " " << first.getLastname() << endl;
	cout << "Last element: " << last.getFirstname() << " " << last.getLastname() << endl;
	

	

	cout << endl;
}

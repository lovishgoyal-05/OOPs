#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string name, degree, hostel;
	int rollNo;
	float currentCGPA;


public:
	void addDetails() {
		cout << "Enter Name: "; getline(cin >> ws, name);
		cout << "Enter Roll No: "; cin >> rollNo;
		cout << "Enter Degree: "; getline(cin >> ws, degree);
		cout << "Enter Hostel: "; getline(cin >> ws, hostel);
		cout << "Enter Current CGPA: "; cin >> currentCGPA;
		cout << "Details added!" << endl;
	}
	void updateDetails() {
		cout << "Update Name: "; getline(cin >> ws, name);
		cout << "Update Roll No: "; cin >> rollNo;
		cout << "Update Degree: "; getline(cin >> ws, degree);
		cout << "Update Hostel: "; getline(cin >> ws, hostel);
		cout << "Update CGPA: "; cin >> currentCGPA;
		cout << "Details updated!" << endl;
	}
	void updateCGPA() {
		cout << "New CGPA: ";
		cin >> currentCGPA;
		cout << "CGPA updated!" << endl;
	}
	void updateHostel() {
		cout << "New Hostel: ";
		getline(cin >> ws, hostel);
		cout << "Hostel updated!" << endl;
	}
	void displaydetails() {
		cout << "\nStudent Details:" << endl;
		cout << "Name: " << name << "\nRoll No: " << rollNo << "\nDegree: " << degree << "\nHostel: " << hostel << "\nCGPA: " << currentCGPA << endl;
	}
};

int main() {
	Student s;
	int ch;
	do {
		cout << "\n1.Add\n2.Update All\n3.Update CGPA\n4.Update Hostel\n5.Display\n6.Exit\nChoice: ";
		cin >> ch;
		switch(ch) {
			case 1: s.addDetails(); break;
			case 2: s.updateDetails(); break;
			case 3: s.updateCGPA(); break;
			case 4: s.updateHostel(); break;
			case 5: s.displaydetails(); break;
		}
	} while(ch!=6);
	return 0;
}

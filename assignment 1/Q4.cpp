#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int rollNo;
	string degree;
	string hostel;
	float currentCGPA;

	void addDetails() {
		cout << "Enter Name: ";
		getline(cin >> ws, name);
		cout << "Enter Roll No: ";
		cin >> rollNo;
		cout << "Enter Degree: ";
		getline(cin >> ws, degree);
		cout << "Enter Hostel: ";
		getline(cin >> ws, hostel);
		cout << "Enter Current CGPA: ";
		cin >> currentCGPA;
	}

	void updateDetails() {
		cout << "Update Name: ";
		getline(cin >> ws, name);
		cout << "Update Roll No: ";
		cin >> rollNo;
		cout << "Update Degree: ";
		getline(cin >> ws, degree);
		cout << "Update Hostel: ";
		getline(cin >> ws, hostel);
		cout << "Update Current CGPA: ";
		cin >> currentCGPA;
	}

	void updateCGPA() {
		cout << "Enter new CGPA: ";
		cin >> currentCGPA;
	}

	void updateHostel() {
		cout << "Enter new Hostel: ";
		getline(cin >> ws, hostel);
	}

	void displaydetails() {
		cout << "\nStudent Details:\n";
		cout << "Name: " << name << endl;
		cout << "Roll No: " << rollNo << endl;
		cout << "Degree: " << degree << endl;
		cout << "Hostel: " << hostel << endl;
		cout << "Current CGPA: " << currentCGPA << endl;
	}
};

int main() {
	Student s;
	int choice;
	do {
		cout << "\n1. Add Details\n2. Update Details\n3. Update CGPA\n4. Update Hostel\n5. Display Details\n6. Exit\nEnter choice: ";
		cin >> choice;
		switch(choice) {
			case 1: s.addDetails(); break;
			case 2: s.updateDetails(); break;
			case 3: s.updateCGPA(); break;
			case 4: s.updateHostel(); break;
			case 5: s.displaydetails(); break;
			case 6: cout << "Exiting..." << endl; break;
			default: cout << "Invalid choice!" << endl;
		}
	} while(choice != 6);
	return 0;
}

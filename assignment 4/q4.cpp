#include <iostream>
using namespace std;

class Student {
protected:
    int RollNo;
    string Name;
public:
    void GetDetails() {
        cout << "Enter student roll number: ";
        cin >> RollNo;
        cout << "Enter name of the student: ";
        cin >> Name;
    }
    void DisplayDetails() {
        cout << "Roll No: " << RollNo << endl;
        cout << "Name: " << Name << endl;
    }
};

class Marks : public Student {
protected:
    int Subject1, Subject2;
public:
    void GetMarks() {
        cout << "Enter the marks of subject 1: ";
        cin >> Subject1;
        cout << "Enter the marks of subject 2: ";
        cin >> Subject2;
    }
    void DisplayMarks() {
        cout << "Marks of Subject 1: " << Subject1 << endl;
        cout << "Marks of Subject 2: " << Subject2 << endl;
    }
};

class Result : public Marks {
private:
    int TotalMarks;
public:
    void CalculateResult() {
        TotalMarks = Subject1 + Subject2;
    }
    void DisplayResult() {
        cout << "Total Marks: " << TotalMarks << endl;
        if (TotalMarks >= 40)
            cout << "Status: PASSED" << endl;
        else
            cout << "Status: FAILED" << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Result r;
        r.GetDetails();
        r.GetMarks();
        r.DisplayDetails();
        r.DisplayMarks();
        r.CalculateResult();
        r.DisplayResult();
    }
    return 0;
}

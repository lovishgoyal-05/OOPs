
#include <iostream>
using namespace std;


class Student {
	string name;
public:
	void show() 
    {
		cout << "Name: " << name << endl;
	}
	void set(string n) {
		name = n;
	}
};
Student modifyByValue(Student s) {
	s.set("ValueName");
	return s;
}
Student* modifyByAddress(Student* s) {
	s->set("AddressName");
	return s;
}


int main() {
	Student s1;
	cout << "Original object:" << endl;
	s1.show();

	Student s2 = modifyByValue(s1);
	cout << "After modifyByValue (returned object):" << endl;
	s2.show();
	cout << "Original object after pass-by-value:" << endl;
	s1.show();


	Student* s3 = modifyByAddress(&s1);
	cout << "After modifyByAddress (returned object):" << endl;
	s3->show();
	cout << "Original object after pass-by-address:" << endl;
	s1.show();

	return 0;
}

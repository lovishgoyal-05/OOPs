#include <iostream>
using namespace std;

class func {
private:
	void privateFunc() {
		cout << "This is a private member function." << endl;
	}
public:
	void publicFunc() {
		cout << "Calling private member function from public member function..." << endl;
		privateFunc(); 
	}
	void showAccess() {
		cout << "Accessing private member function from another public member function..." << endl;
		privateFunc(); 
	}
};

int main() {
	func f;
	f.publicFunc();
	f.showAccess();
	return 0;
}

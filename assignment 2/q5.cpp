
#include <iostream>
using namespace std;

int value = 10; // Global variable

class Demo {
public:
	static int value; // Static public member variable
};

int Demo::value = 20; // Initialize static member

int main() {
	int value = 30; 
	cout << "Local variable value: " << value << endl;
	cout << "Global variable value: " << ::value << endl;
	cout << "Static member variable Demo::value: " << Demo::value << endl;
	return 0;
}

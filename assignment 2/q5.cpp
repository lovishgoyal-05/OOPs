
#include <iostream>
using namespace std;

int value = 10;

class Demo {
public:
	static int value;
};

int Demo::value = 20;

int main() {
	int value = 30; 
	cout << "Local variable value: " << value << endl;
	cout << "Global variable value: " << ::value << endl;
	cout << "Static member variable Demo::value: " << Demo::value << endl;
	return 0;
}

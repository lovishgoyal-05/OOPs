#include <iostream>
using namespace std;

int main() {
	float c, f;
	cout << "Enter temperature in Celsius: ";
	cin >> c;
	f = 9 * c / 5 + 32;
	cout << "Temperature in Fahrenheit: " << f << endl;
	return 0;
}

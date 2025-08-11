#include <iostream>
using namespace std;

class Complex {
private:
	float real, imag;
public:
	void set() {
		cout << "Enter real part: ";
		cin >> real;
		cout << "Enter imaginary part: ";
		cin >> imag;
	}
	void display() {
		cout << real <<"+"<< imag << "i" << endl;
	}
	Complex sum(Complex c) {
		Complex temp;
		temp.real = real + c.real;
		temp.imag = imag + c.imag;
		return temp;
	}
};

int main() {
	Complex c1, c2, c3;
	cout << "Enter first complex number:\n";
	c1.set();
	cout << "Enter second complex number:\n";
	c2.set();
	c3 = c1.sum(c2);
	cout << "Sum: ";
	c3.display();
	return 0;
}

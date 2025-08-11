#include <iostream>
using namespace std;

int main() {
	
	for (int i = 0; i < 5; i++) {
		cout << i << " ";
	}
	cout << endl;

	
	int j = 0;
	for (; j < 5; j++) {
		cout << j << " ";
	}
	cout << endl;

	
	int k = 0;
	for (; k < 5;) {
		cout << k << " ";
		k++;
	}
	cout << endl;

	
	int m = 0;
	for (;;) {
		if (m >= 5) break;
		cout << m << " ";
		m++;
	}
	cout << endl;

	
	int n = 0;
	while (n < 5) {
		cout << n << " ";
		n++;
	}
	cout << endl;

	
	int p = 0;
	do {
		cout << p << " ";
		p++;
	} while (p < 5);
	cout << endl;

	int q = 10;
	do {
		cout << q << " ";
		q++;
	} while (q < 5);
	cout << endl;

	return 0;
}

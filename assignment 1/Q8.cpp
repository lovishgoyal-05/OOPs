#include <iostream>
using namespace std;

namespace First {
	int value = 10;
	void show() {
		cout << "First::value = " << value << endl;
	}
}

namespace Second {
	int value = 20;
	void show() {
		cout << "Second::value = " << value << endl;
	}
}

int main() {
	cout << "Using First namespace:" << endl;
	First::show();
	cout << "Using Second namespace:" << endl;
	Second::show();
	cout << "Accessing variables directly:" << endl;
	cout << "First::value = " << First::value << endl;
	cout << "Second::value = " << Second::value << endl;
	return 0;
}

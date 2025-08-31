#include <iostream>
using namespace std;
class first {
public:
	first() { cout << "first cont\n"; }
	~first() { cout << "first des\n"; }
};


int main() {
	first a;

	return 0;
}

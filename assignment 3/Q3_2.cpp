#include <iostream>
using namespace std;
class first {
public:
	first() { cout << "first cont\n"; }
	~first() { cout << "first des\n"; }
    ~first() { cout << "first 2nd des\n"; }
};

int main() {
	first a;
	return 0;
}

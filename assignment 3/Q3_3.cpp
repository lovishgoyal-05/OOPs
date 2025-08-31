#include <iostream>
using namespace std;
class first {
public:
	first() { cout << "first cont\n"; }
    ~first(int x) { cout << "first des\n"; }
};
int main() {
	first a;
	return 0;
}

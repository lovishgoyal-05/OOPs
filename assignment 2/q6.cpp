

#include <iostream>
using namespace std;

class Demo {
public:
	static void hello() {
		cout << "Hello" << endl;
	}
};

int main() {
	Demo::hello();
	return 0;
}

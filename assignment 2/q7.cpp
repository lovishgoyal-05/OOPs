#include <iostream>
using namespace std;

class Demo {
	int x;
public:
	Demo(int val) 
    { x = val; }
	void show() const 
    {
		cout << "x = " << x << endl;
	}
};

int main() {
	Demo d(5);
	d.show();
	return 0;
}

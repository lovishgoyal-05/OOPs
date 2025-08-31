#include <iostream>
using namespace std;
class class1 {
public:
	int x;
	void set(int val) {
		this->x = val;
	}
	void show() {
		cout << "x = " << x << endl;
	}
};

int main() {
	class1 obj;
	obj.set(10); 
	obj.show();

	class1 *ptr;
	ptr = &obj;
	ptr->set(20); 
	ptr->show();

	return 0;
}

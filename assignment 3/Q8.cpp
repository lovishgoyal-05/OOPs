
#include <iostream>
using namespace std;
int main() {
	int *a = new int;
	cin >> *a;
	cout << *a;
	delete a;
	return 0;
}

#include <iostream>
using namespace std;

class Demo 
{
public:
	void show(); 
	static int count; 
};


void Demo::show() 
{
	cout << "Member function defined outside class." << endl;
}


int Demo::count = 5;

int value = 100; 

int main()
{
	Demo d;
	d.show();

	int value = 50; 
	cout << "Local value: " << value << endl;
	cout << "Global value: " << ::value << endl; 
	cout << "Static variable Demo::count: " << Demo::count << endl; 

	return 0;
}

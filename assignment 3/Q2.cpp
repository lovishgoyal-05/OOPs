#include <iostream>
using namespace std;
class Rectangle {
public:
	int l, b;
	Rectangle(int x=0, int y=0) 
    {
		l = x;
		if(y==0)
        {
            b = x;
        }
        else
        {
            b = y;
        }
    }
  
    ~Rectangle() 
    {
		cout << "Destructor called\n";
	}
	int area() 
    {
		return l * b;
	}
};
int main() {
	Rectangle arr[3];
	arr[0] = Rectangle();
    arr[1] = Rectangle(3, 4);
    arr[2] = Rectangle(5);
    for(int i=0; i<3; i++)
    {
		cout << "Area " << i+1 << ": " << arr[i].area() << endl;
	}
	return 0;
}

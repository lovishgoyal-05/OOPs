#include <iostream>
using namespace std;
class Rectangle {
public:
	int l,b;
	Rectangle() 
    {
         l=0; b=0;
    }
	Rectangle(int x,int y)
    { 
        l=x; b=y; 
    }
	Rectangle(int x) 
    { 
        l=x; b=x; 
    }
	int area() 
    { 
        return l*b; 
    }
};
int main() {
	Rectangle r1, r2(3,4), r3(5);
	cout<<"area1: "<<r1.area()<<endl;
	cout<<"area2: "<<r2.area()<<endl;
	cout<<"area3: "<<r3.area()<<endl;
	return 0;
}

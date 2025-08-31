#include <iostream>
using namespace std;
class X;
class Y;
int add(X a, Y b);
class X
{
private:
	int val;
public:
	X(int x)
    {
         val=x; 
    }
	friend int add(X,Y);
};
class Y {
private:
	int val;
public:
	Y(int y) 
    {
         val=y;
    }
	friend int add(X,Y);
};
int add(X a,Y b)
 {
	return a.val+b.val;
}
int main() {
	X x(5); 
    Y y(7);
	cout<<"Sum: "<<add(x,y)<<endl;
	return 0;
}

#include <iostream>
using namespace std;
class A;
class B;
void swapVals(A &a,B &b) 
{
	int t=a.val; a.val=b.val; b.val=t;
}
class A
{
    private:
    	int val;
    public:
	    A(int x) { val=x; }
	    void show() { cout<<"A: "<<val<<endl; }
	    friend void swapVals(A&,B&);
};
class B 
{
    private:
        int val;
    public:
        B(int x) { val=x; }
        void show() { cout<<"B: "<<val<<endl; }
        friend void swapVals(A&,B&);
};
int main() 
{
	A a(1); 
    B b(2);
	a.show(); 
    b.show();
	swapVals(a,b);
	a.show(); 
    b.show();
	return 0;
}

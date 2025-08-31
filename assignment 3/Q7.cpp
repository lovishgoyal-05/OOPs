#include <iostream>
using namespace std;
class B;
class A 
{
    private:
        int val;
    public:
        A(int x) 
        {
            val=x; 
        }
        friend class B;
};
class B 
{
    public:
        void showA(A &a) 
        {
            cout<<"A's private val: "<<a.val<<endl;
        }
};
int main() {
	A a(42);
	B b;
	b.showA(a);
	return 0;
}

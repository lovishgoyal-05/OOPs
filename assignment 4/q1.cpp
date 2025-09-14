#include <iostream>
using namespace std;

class Base {
public:
    int pub = 10;
protected:
    int prot = 20;      
private:
    int priv = 30;  
};

class PublicDerived : public Base {
public:
    void show() {
        cout << "PublicDerived: pub = " << pub << endl;
        cout << "PublicDerived: prot = " << prot << endl;
    }
};


class ProtectedDerived : protected Base {
public:
    void show() {
        cout << "ProtectedDerived: pub = " << pub << endl;
        cout << "ProtectedDerived: prot = " << prot << endl;
    }
};
class PrivateDerived : private Base {
public:
    void show() {
        cout << "PrivateDerived: pub = " << pub << endl;
        cout << "PrivateDerived: prot = " << prot << endl;
    }
};

int main() {
    PublicDerived obj1;
    obj1.show();
    cout << "From main we can access obj1.pub = " << obj1.pub << endl; 

    ProtectedDerived obj2;
    obj2.show();


    PrivateDerived obj3;
    obj3.show();
  

    return 0;
}

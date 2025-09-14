#include <iostream>
using namespace std;

class Number {
public:
    int num;
    void getData() {
        cout << "Enter a number: ";
        cin >> num;
    }
};

class Square : public Number {
public:
    void findSquare() {
        cout << "Square of " << num << " is: " << (num * num) << endl;
    }
};

class Cube : public Number {
public:
    void findCube() {
        cout << "Cube of " << num << " is: " << (num * num * num) << endl;
    }
};

int main() {
    Square s;
    Cube c;
    s.getData();
    s.findSquare();
    c.getData();
    c.findCube();

    return 0;
}

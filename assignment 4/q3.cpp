#include <iostream>
using namespace std;

class Fruit {
public:
    int total;
    Fruit() {
        total = 0;
    }
};

class Apples : public Fruit {
public:
    int apples;
    Apples(int a) {
        apples = a;
        total += apples;
    }
};

class Mangoes : public Fruit {
public:
    int mangoes;
    Mangoes(int m) {
        mangoes = m;
        total += mangoes;
    }
};

int main() {
    int a, m;
    cout << "Enter number of apples: ";
    cin >> a;
    cout << "Enter number of mangoes: ";
    cin >> m;

    Apples objA(a);
    Mangoes objM(m);

    cout << "Number of Apples: " << objA.apples << endl;
    cout << "Number of Mangoes: " << objM.mangoes << endl;
    cout << "Total Fruits: " << (objA.apples + objM.mangoes) << endl;

    return 0;
}

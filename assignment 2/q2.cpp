
#include <iostream>
using namespace std;

class Rectangle 
{
	int length, width;
public:
	void set(int l, int w) 
    {
		length = l;
		width = w;
	}
	int area() 
    {
		return length * width;
	}
};


int main() {
	const int MAX = 100;
	int n;
	cout << "Enter number of rectangles (max " << MAX << "): ";
	cin >> n;
	
	Rectangle rects[MAX];
	for (int i = 0; i < n; ++i) {
		int l, w;
		cout << "Enter length and width of rectangle " << i+1 << ": ";
		cin >> l >> w;
		rects[i].set(l, w);
	}
	cout << "\nAreas of rectangles:\n";
	for (int i = 0; i < n; ++i) {
		cout << "Rectangle " << i+1 << ": " << rects[i].area() << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;
void SwapValues(int &x, int &y);

int main() {
	int a, b;

	cout << "enter two numbers : ";
	cin >> a >> b;
	if (a < b) SwapValues(a, b);
	cout << "\nmax = " << a << "   min = " << b << endl;
	return 0;
}

void SwapValues(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}
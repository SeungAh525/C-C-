#include <iostream>
using namespace std;

int main() {
	const double PI = 3.14159;
	double radius;
	cout << "enter radius : ";
	cin >> radius;
	double area = radius * radius*PI;
	cout << "\n" << "area of circle = " << area << endl;
	return 0;
}
#include <iostream>
using namespace std;
namespace my1 { int n = 10; }
namespace my2 { int n = 20; }
int n = 30;

int main() {
	int n = 40;
	cout << my1::n << "\n" << endl;
	cout << my2::n << "\n" << endl;
	cout << ::n << "\n" << endl;
	cout << n << "\n" << endl;
	return 0;
}
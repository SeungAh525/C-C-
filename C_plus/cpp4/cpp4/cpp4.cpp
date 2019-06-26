#include <iostream>
using namespace std;

int main() {
	float FtoC(float F);
	float Ftemp, Ctemp;
	
	cout << "Fahrenheit : ";
	cin >> Ftemp;
	Ctemp = FtoC(Ftemp);
	cout << "\n---> Celsius : " << Ctemp << endl;
	return 0;
}

float FtoC(float F) {
	float c = (F - 32) * 5 / 9;
	return c;
}
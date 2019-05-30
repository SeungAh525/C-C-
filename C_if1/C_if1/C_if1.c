#include <stdio.h>
void main() {
	int a = 1, b = 2;
	if (a > b) {
		a = a + 10;
		printf(" a = %d \n\n", a);
	}
	else {
		b = b + 10;
		printf(" b = %d \n", b);
	}
}
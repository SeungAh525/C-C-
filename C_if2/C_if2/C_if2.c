#include <stdio.h>
void main() {
	int a, b, max;
	printf("enter two numbers to compare \n\n");
	scanf("%d %d", &a, &b);
	if (a > b) {
		max = a;
	}
	else {
		max = b;
	}
	printf("\nmax = %d \n", max);
}
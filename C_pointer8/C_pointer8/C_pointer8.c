#include <stdio.h>
void main() {
	static int a[] = { 1,2,3,4,5 };
	int *pt, b, c, d;
	pt = a;
	b = *pt + *(pt + 3);
	pt++;
	c = *pt + *(pt + 3);
	d = *pt + 10;
	printf("b = %d,   c = %d,   d = %d \n", b, c, d);
}


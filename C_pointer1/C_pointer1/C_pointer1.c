#include <stdio.h>
void main() {
	int *p, a, b;
	a = 5;
	p = &a;
	b = *p;
	printf("a = %d  , &a = %x  , p = %x  , *p = %d  , b = %d  , &b = %x \n", a, p, &a, *p, b, &b);
}
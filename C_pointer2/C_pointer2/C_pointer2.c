#include <stdio.h>
int change(int *k);
void main() {
	int a = 10, b, *p;
	p = &a;
	b = *p;
	printf("before - a : %d  , &a : %x  , p : %x  , *p = %d  , b : %d \n", a, &a ,p, *p, b);
	change(p);
	printf("after_ - a : %d  , &a : %x  , p : %x  , *p = %d  , b : %d \n", a, &a, p, *p, b);
}

int change(int *k) {
	*k += *k;
	return 0;
}
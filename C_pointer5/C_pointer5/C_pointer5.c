#include <stdio.h>
void main() {
	int *p, *q, a[] = { 1,2,3,4,5,6,7,8,9,10 };
	p = &a[3];
	printf("*p = %d,  *(p+3) = %d,  *p = %d \n\n", *p, *(p + 3), *p);
	q = p + 3;
	printf("*p = %d,  *q = %d,  p = %x,  q = %x,  p-q = %d,  q-p = %d \n\n", *p, *q, p, q, p - q, q - p );
	printf("*q = %d,  *q+30 = %d, *(q+3) = %d \n", *q, *q + 30, *(q + 3));
}
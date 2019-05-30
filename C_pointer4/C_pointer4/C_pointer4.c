#include <stdio.h>
void main() {
	int *p, a[] = { 1, 2, 3, 40, 50};
	p = &a[0];
	printf("*p = %d \n\n", *p);
	printf("*p++ = %d,  *p = %d \n\n", *p++, *p);
	printf("*++p = %d,  *p = %d \n\n", *++p, *p);
	printf("*p+2 = %d,  *(p+2) = %d,  *p = %d \n\n", *p+2, *(p+2), *p);
	p = p + 2;
	printf("*p = %d,  *p-25 = %d,  *(p-1) = %d,  *p = %d \n\n", *p, *p - 25, *(p-1), *p);
}
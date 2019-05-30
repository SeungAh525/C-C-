#include <stdio.h>
void main() {
	int *p, a[] = { 1, 20, 3, 40, 5, 60, 7, 80, 9, 10};
	p = &a[0];
	printf("*p+1 = %d \n\n", *p + 1);
	printf("*(p+1) = %d \n\n", *(p + 1));
	printf("*p = %d \n\n", *p);
	printf("*p++ = %d \n\n", *p++);
	printf("*p = %d \n\n", *p);
	printf("*++p = %d \n\n", *++p);
	printf("*p = %d \n\n", *p);
	printf("++*p = %d \n\n", ++*p);
	printf("*p = %d \n", *p);
}
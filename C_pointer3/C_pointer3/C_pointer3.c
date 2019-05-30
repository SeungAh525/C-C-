#include <stdio.h>
void main() {
	int a = 5, c = 0;
	char b = 'b', d = NULL;
	void *p = NULL;
	p = &a;
	c = *(int *)p;
	printf("c = %d  , *p = %d \n", c, *(int *)p);
	p = &b;
	d = *(char *)p;
	printf("d = %c  , *p = %c \n", d, *(char *)p);
}
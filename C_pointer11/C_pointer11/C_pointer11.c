#include <stdio.h>
void main() {
	char a = 'A', *p, **pp;
	p = &a;
	pp = &p;
	printf("*p = %x ,   **pp = %c \n\n", *p, **pp);
}
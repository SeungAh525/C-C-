#include <stdio.h>
void main() {
	char a[] = "ARRAY", *p = "POINTER";
	int i;
	for (i = 0; i < 5; i++) {
		printf("*(a+%d) : %c \n\n", i, *(a + i));
	}
	for (i = 0; i < 7; i++) {
		printf("p[%d] : %c \n\n", i, p[i]);
	}
}
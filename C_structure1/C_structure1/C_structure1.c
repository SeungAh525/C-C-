#include<stdio.h>
void fcn1();
int x;
void main() {
	printf("x = %d \n\n", x);
	fcn1();
	printf("x = %d \n\n", x);
}
void fcn1() {
	x++;
}
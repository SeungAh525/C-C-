#include<stdio.h>
void main() {
	int n;
	printf("enter a number : ");
	scanf("%d", &n);
	printf("\nn %% 5 = %d \n\n", n % 5);
	switch (n % 5) {
	case 0: printf("reminder 0 \n\n");
		break;
	case 1: printf("reminder 1 \n\n");
		break;
	case 2: printf("reminder 2 \n\n");
		break;
	default: printf("reminder 3 or 4 \n");
		break;
	}
}
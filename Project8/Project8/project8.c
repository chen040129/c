#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	printf("所求的值")；
		scanf("%d", &a);
	int d = a;
	int mask = 1;
	while (a > 9) {
		a /= 10;
		mask *= 10;
		printf("\na=%d mask=%d", a, mask);
	}
	do {
		int c = d / mask;
		printf("\n% d", c);
		if (mask > 9) {
			printf(" ");
		}
		d %= mask;
		mask /= 10;
		//printf("\n%d %d %d", c, mask, a);
	} while (mask > 0);
	return 0;
}//整数的分解
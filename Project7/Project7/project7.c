#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	if (x == 1) {
		printf("这个数不是素数");
	}
	else {
		int a = 1;
		for (int i = 2; i < x; i++) {
			if (x % i == 0) {
				a = 0;
				break;
			}
		}
		if (a == 1 || x == 2) {
			printf("这个数是素数。");
		}
		else {
			printf("这个数不是素数。");
		}
	}
	return 0;
}
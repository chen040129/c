#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float a = 0;
	float b = 0;
	printf("请输入第一个值\n");
	scanf("%f", &a);
	printf("请输入第二个值\n");
	scanf("%f", &b);
	printf("得出结果\n");
	printf("%f+%f=%f\n", a, b, a + b);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float a = 0;
	float b = 0;
	printf("�������һ��ֵ\n");
	scanf("%f", &a);
	printf("������ڶ���ֵ\n");
	scanf("%f", &b);
	printf("�ó����\n");
	printf("%f+%f=%f\n", a, b, a + b);
	return 0;
}
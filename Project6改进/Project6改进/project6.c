#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	int x = 0;
	int y = 0;//初始化
	scanf("%d", &x);
	if (x < 0)
	{
		y = -x;
	}
	else
	{
		y = x;
	};//加入x为负数时的考虑
	n++;
	y /= 10;//排除当x=0时显示出来为0位数
	while (y > 0)
	{
		y /= 10;
		n++;
	};//while循环
	printf("%d", n);
	return 0;
}
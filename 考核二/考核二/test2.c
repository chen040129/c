#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a;
	int b = rand() % 100 + 0;//生成一个随机数(0-100)
	printf("请输入你猜的数字:");
	while (1)//此处1保证可以一直循环
	{
		scanf("%d", &a);//记入每一次输入的a值，与b值比较
		if (a > b)
		{
			printf("猜大了\n");
		}
		else if (a < b)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;//如果猜出所求值跳出循环
		}
	}
	return 0;
}
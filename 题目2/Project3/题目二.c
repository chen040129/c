#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int sum[100];
	int x;
	int sums[100];
	int cnt = 0;
	int i = 0;
	printf("请输入所求数组\n");
	scanf("%d", &x);//初始化
	
	while (x != -1) {
		sum[cnt] = x;
		cnt++;
		scanf("%d", &x);
	}//为数组中每个值赋值

	int targe;
	printf("请输入所求值\n");
	scanf("%d", &targe);//输入所求值

	int j = 0;
	for (i = 0,j = 0; i < sizeof(sum)/sizeof(sum[0]),j < sizeof(sum) / sizeof(sum[0]);j++,i++)
	{
		sums[j] = sum[i];
	}//将sums的每个值赋给一个新的sum的函数

	for (i = 0; i < sizeof(sum) / sizeof(sum[0]); i++) {
		for (j = 0; j < sizeof(sum) / sizeof(sum[0]); j++) {
			if (sums[j] + sum[i] == targe) {
				printf("[%d,%d]", i, j);
			}
		}
	}//令sums和sum中的每个值相加，满足条件等于所求值则输出
	return 0;
     }
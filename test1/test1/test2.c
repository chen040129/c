#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x = 1;// 初始化
	int number = 0;
	while (x < 100) {
		x++;//限定x由2到100 ps 1满足条件但不是素数
		int y = x;//引入y变量使其等于x，保留x未变化的数量
		int a = 1;//确定a初始值为1
		for (int i = 2; i < x; i++) {
			if (x % i == 0) {
				a = 0;
			}
		}//判断是否是素数，如果不是素数就输出a=0
		if (a == 1) {
			printf(" %d", y);
			number++;
		}//当a=1时，则此数为素数，则输出，并且使number加一
	}
	printf(" \nnumber=%d", number);//统计100内有多少素数 ps 从百度上得到的优化思路
	return 0;
}
//找出100以内的素数
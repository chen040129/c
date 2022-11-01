#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	int cnt = 0;
	scanf("%d", &a);
	int b, c, d;

	int i = a;
	int m = 1;
	for (b = a; b <= i + 3; b++) {
		int c = a;
		for (c = a; c <= i + 3; c++) {
			int d = a;
			for (d = a; d <= i + 3; d++) {
				if (b != c && c != d && d != b) {
					cnt++;
					printf("%d%d%d", b, c, d);
					/* printf("cnt=%d", cnt);*/
					if (cnt % 6 == 0) {
						printf("\n");
					}
					else {
						printf(" ");
					}
				}
			}
		}
	}
	return 0;
}
//4-0.求符合给定条件的整数集（15）
//给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它们组成的无重复数字的3位数。
//输入格式：
//输入在一行中给出A。
//输出格式：
//输出满足条件的的3位数，要求从小到大，每行6个整数。整数间以空格分隔，但行末不能有多余空格。
//输入样例：
//2
//输出样例 :
//234 235 243 245 253 254
//324 325 342 345 352 354
//423 425 432 435 452 453
//523 524 532 534 542 543
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int sum[100];
	int x;
	int sums[100];
	int cnt = 0;
	int i = 0;
	printf("��������������\n");
	scanf("%d", &x);//��ʼ��
	
	while (x != -1) {
		sum[cnt] = x;
		cnt++;
		scanf("%d", &x);
	}//Ϊ������ÿ��ֵ��ֵ

	int targe;
	printf("����������ֵ\n");
	scanf("%d", &targe);//��������ֵ

	int j = 0;
	for (i = 0,j = 0; i < sizeof(sum)/sizeof(sum[0]),j < sizeof(sum) / sizeof(sum[0]);j++,i++)
	{
		sums[j] = sum[i];
	}//��sums��ÿ��ֵ����һ���µ�sum�ĺ���

	for (i = 0; i < sizeof(sum) / sizeof(sum[0]); i++) {
		for (j = 0; j < sizeof(sum) / sizeof(sum[0]); j++) {
			if (sums[j] + sum[i] == targe) {
				printf("[%d,%d]", i, j);
			}
		}
	}//��sums��sum�е�ÿ��ֵ��ӣ�����������������ֵ�����
	return 0;
     }
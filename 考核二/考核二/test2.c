#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a;
	int b = rand() % 100 + 0;//����һ�������(0-100)
	printf("��������µ�����:");
	while (1)//�˴�1��֤����һֱѭ��
	{
		scanf("%d", &a);//����ÿһ�������aֵ����bֵ�Ƚ�
		if (a > b)
		{
			printf("�´���\n");
		}
		else if (a < b)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;//����³�����ֵ����ѭ��
		}
	}
	return 0;
}
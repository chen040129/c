#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	int x = 0;
	int y = 0;//��ʼ��
	scanf("%d", &x);
	if (x < 0)
	{
		y = -x;
	}
	else
	{
		y = x;
	};//����xΪ����ʱ�Ŀ���
	n++;
	y /= 10;//�ų���x=0ʱ��ʾ����Ϊ0λ��
	while (y > 0)
	{
		y /= 10;
		n++;
	};//whileѭ��
	printf("%d", n);
	return 0;
}
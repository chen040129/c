#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x = 1;// ��ʼ��
	int number = 0;
	while (x < 100) {
		x++;//�޶�x��2��100 ps 1������������������
		int y = x;//����y����ʹ�����x������xδ�仯������
		int a = 1;//ȷ��a��ʼֵΪ1
		for (int i = 2; i < x; i++) {
			if (x % i == 0) {
				a = 0;
			}
		}//�ж��Ƿ�������������������������a=0
		if (a == 1) {
			printf(" %d", y);
			number++;
		}//��a=1ʱ�������Ϊ�����������������ʹnumber��һ
	}
	printf(" \nnumber=%d", number);//ͳ��100���ж������� ps �Ӱٶ��ϵõ����Ż�˼·
	return 0;
}
//�ҳ�100���ڵ�����
#include<stdio.h>
int main(void){
    //volatile int��ֹ�������Ż�����
    // extern int ����һ��û�д洢�ռ�ı���
    // const int ����һ�������޸ĵı���
    // register int ����Ĵ������������Ч�ʣ����ǻ�ռ�üĴ����Ŀռ䣬����޼Ĵ����ռ��򲻻���Ч
    int str[3][4][5]={
        {
            {1,2,3,4,5},
            {6,7,8,9,10},
            {11,12,13,14,15},
            {16,17,18,19,20},
        },
        {
            {1,2,3,4,5},
            {6,7,8,9,10},
            {11,12,13,14,15},
            {16,17,18,19,20},
        },
        {
            {1,2,3,4,5},
            {6,7,8,9,10},
            {11,12,13,14,15},
            {16,17,18,19,20},
        }
    };
    for (size_t i = 0; i < 3; i++)
    {
       for (size_t j = 0; j < 4; j++)
       {
        for (size_t n = 0; n < 5; n++)
        {
        printf("%d,",str[i][j][n]); 
        }
        printf("\n");
       }
        printf("\n");
    }

    printf("�㣺%d\n",sizeof(str)/sizeof(str[0]));
    printf("�У�%d\n",sizeof(str[0])/sizeof(str[0][0]));
    printf("����%d\n",sizeof(str[0][0])/sizeof(str[0][0][0]));
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int type = 0;
    scanf("%d", &type);
    switch (type)
    {
    case 1:
        printf("���Ϻ�");
        return 0;
    case 2:
        printf("�����");
        break;
    case 3:
        printf("���Ϻ�");
        break;
    default:
        printf("hello");
        break;

    }
    return 0;
}
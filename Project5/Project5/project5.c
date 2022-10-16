#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int type = 0;
    scanf("%d", &type);
    switch (type)
    {
    case 1:
        printf("早上好");
        return 0;
    case 2:
        printf("中午好");
        break;
    case 3:
        printf("晚上好");
        break;
    default:
        printf("hello");
        break;

    }
    return 0;
}
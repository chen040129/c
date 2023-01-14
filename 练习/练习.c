#include<stdio.h>
int main(void){
    //volatile int防止编译器优化代码
    // extern int 创建一个没有存储空间的变量
    // const int 定义一个不可修改的变量
    // register int 定义寄存器变量，提高效率，但是会占用寄存器的空间，如果无寄存器空间则不会生效
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

    printf("层：%d\n",sizeof(str)/sizeof(str[0]));
    printf("行：%d\n",sizeof(str[0])/sizeof(str[0][0]));
    printf("个：%d\n",sizeof(str[0][0])/sizeof(str[0][0][0]));
}

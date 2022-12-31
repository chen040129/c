#include<stdio.h>
#define SIZE 10
int main(void){
    int str[SIZE]={5,6,7,9,3,2,1,8,0,4};
    int temp=0;
    // for (size_t i = 0; i < SIZE; i++)
    // {
    //     printf("初始值：%d\n",str[i]);
    // }
    for (size_t j = 0; j < SIZE-1; j++)//执行层数
    {
       for(int i=0;i<SIZE-1-j;i++){//每一层的执行次数
        if(str[i]>str[i+1]){
            temp=str[i];
            str[i]=str[i+1];
            str[i+1]=temp;
        }
    }
    }
    for (size_t m = 0; m < 10; m++)
    {
    printf("str[%d]=%d\n",m,str[m]);
    }
    return 0;
}

#include<stdio.h>
int main(){
    char a;
    printf("请输入成绩：\n");
    scanf("%lu",&a);
    a>=90?printf("A"):(a>60?printf("B"):printf("c"));
    return 0;
}
// 利用条件运算符的嵌套来完成此题：
// 学习成绩>=90分的同学用A表示，
// 60-89分之间的用B表示，60分以下的用C表示。
#include<stdio.h>
int main(){
 int a;
 int b;

printf("请输入一个数。\n");
 scanf("%d",&a);

 for(b=2;b<=a;b++){
   while(a%b==0){
       printf("%d  ",b);
       a/=b;
   }
 }
 return 0;
}//将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。


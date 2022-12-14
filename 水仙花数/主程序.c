#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int num;
    for(a=1;a<10;a++){
        for(b=0;b<10;b++){
            for(c=0;c<10;c++){
                if(a*a*a+b*b*b+c*c*c==a*100+b*10+c){
                    printf("num=%d\n",a*100+b*10+c);
                }
                // num=a*100+b*10+c*1;
                // printf("%d",num);
            }
        }
    }
    return 0;
} 
// 打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，
//  其各位数字立方和等于该数 本身。例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
#include<stdio.h>
int main(){
    int m;
    int n;
    int x;
    int y;
    int t;

    printf("输入两个数:");
    scanf("%d,%d",&m,&n);
    
    if(m>n){
        t=m;
        m=n;
        n=t;
    }

    for(x=m;x<=m&&x<=n;x--){
       if(m%x==0&&n%x==0){
        printf("最大公约数为%d\n",x);
        break;
       }
    }

   for(y=n;y>=m&&y>=n;y++){
       if(y%m==0&&y%n==0){
        printf("最小公倍数为%d",y);
        break;
       }
    }
    return 0;
}
// 输入两个正整数m和n，
// 求其最大公约数和最小公倍数。
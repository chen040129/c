#include<stdio.h>
int main(){
    int a;
    int n;
    int t;
    int num=0;
    printf("输入a和n\n");
    scanf("%d %d",&a,&n);
    t=a;

    for(;1<=n;n--){
    num+=t;
    a=a*10;
    t+=a;
    }
      printf("a+aa+aaa+aaaa+aa...a=%d\n",num);
}
//求s=a+aa+aaa+aaaa+aa...a的值，
// 其中a是一个数字。
// 例如2+22+222+2222+22222(此时共有5个数相加)，
// 几个数相加有键盘控制。
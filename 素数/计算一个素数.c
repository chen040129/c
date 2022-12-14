#include<stdio.h>
int main(){
   int i;
   int j;
   int count=0;
   for(i=101;i<=200;i++){
    for(j=2;j<i;j++){
    if(i%j==0){
        break;
    }
   }
    if(i<=j){
        printf("prime=%d  ",i);
        count++;
        if(count%5==0){
         printf("\n");
        }
    }
}
      printf("\ncount=%d",count);
   return 0;
}//判断 101 到 200 之间的素数。
#include<stdio.h>
int main(){
    float str[5][3];

    printf("请输入三行五列的值，中间用空格隔开:\n");
    for (size_t i = 0; i < 5; i++)
    {
      for (size_t j = 0; j < 3; j++)
      {
      scanf("%f",&str[i][j]);
      }
      
    }
    
     for (size_t i = 0; i < 5; i++)
    {
      float sum=0;
      for (size_t j = 0; j < 3; j++)
      {
      sum+=str[i][j];
      }     
    printf("第%d行的平均值sum=%.2f\n\n",i,sum/3);
    }//求一行的平均值

     for (size_t i = 0; i < 3; i++)
    {
    double sum=0;
      for (size_t j = 0; j < 5; j++)
      {
      sum+=str[j][i];
      } 
    printf("第%d列的平均值sum=%.2f\n",i,sum/5);    
    }//求一列的平均值

    return 0;
}
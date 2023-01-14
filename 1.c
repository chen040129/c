#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
int main(){
    srand((unsigned int)time(NULL));
    int arr[7]={0};
    int flag=0;
    int j=0;
    for(int i=0;i<6;){
        flag=rand()%32+1;
        // printf("%d",i);
        for (j = 0; j < i; j++)
        {
        if(flag==arr[j]){
            break;
        };
        }
        if(i==j){
        arr[i]=flag;
        i++;
        }
        }
    for (size_t i = 0; i < 6; i++)
    {
        if(i!=6){
            printf("%d ",arr[i]);
        }else
        {
            printf("%d",arr[i]);
        }

    }
    
}
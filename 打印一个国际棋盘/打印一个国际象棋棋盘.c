#include<stdio.h>
#include<windows.h>
int main(){
    int i=219;
    int h=0;
    int w=0;
    SetConsoleOutputCP(437);
    for(h=0;h<=8;h++){
        for(w=0;w<=8;w++){
            if((w+h)%2==0){
             printf(" ");
             }
             else{
                printf("%c",i);
             }    
            }
            printf("\n");
        }
    return 0;
    }
   
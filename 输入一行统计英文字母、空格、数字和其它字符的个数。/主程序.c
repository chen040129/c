#include <stdio.h>
int main() {
    char c;
    int word=0;
    int num=0;
    int space=0;
    int others=0;

    printf("请输入字符:\n");
    while((c=getchar())!='\n'){
        if((c>='a'&&c<='z')||(c>='A'&&c>='z')){
            word++;
        }
        else if(c>='0'&&c<='9'){
            num++;
        }
        else if(c==' '){
            space++;
        }
        else{
            others++;
        }
    }

        printf("字母有%d个\n",word);
        printf("数字有%d个\n",num);
        printf("空格有%d个\n",space);
        printf("其他符号有%d个\n",others);

        return 0;
    }
//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
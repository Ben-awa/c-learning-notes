#include<stdio.h>
int main (){
    int num=0,flag=1,i;
    char c;
    for(i=0;(c=getchar())!='\n';i++){//遍历，同时判断输入结束了。
        if(flag == 1){
            if(c != ' '){//单词的起始，如果有连续空格或者句子开头就又空格，不计算单词数。
                num++;
                flag = 0;
            }
        }
        else if(c == ' ')//判断单词的结束位置。
            flag = 1;//遇到单词结尾，flag为1
    }
    printf("%d\n",num);
    return 0;
}
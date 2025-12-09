#include <stdio.h>

//由键盘输入5个字符，将其中的大写字符变成小写（其它类型的字符不变），最后，按输入顺序输出这5个字符。
//此处输入ApPLe,要求转换为apple

void main() {
    int d,need[d],i,lenth;
    d = 64;

    scanf("%s",need[d]);
    lenth = 5;

    for(i=0;i<lenth;i++) {
        if (need[i]<97) need[i]=need[i]+32;
        else need[i]=need[i]-32;
    }
    printf("%d",need[d]);
}
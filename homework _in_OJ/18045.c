//不知道为什么就是不行
#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a==0)
    {
        printf("first ");
    }
    else
    {
        printf("%d ",a-1);
    }

    if(a==9)
    {
        printf("last ");
    }
    else
    {
        printf("%d ",a+1);
    }
    return 0;
}
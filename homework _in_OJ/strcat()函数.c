#include <stdio.h>
#include <string.h>
main()
{
    char s[100]="";
    char a[30];
    char b[30];
    char c[30];
    int fa,fb,fc;
    fa=strlen(a);

    gets(a);strcat(s,a);
    gets(a);strcat(s,a);
    gets(a);strcat(s,a);
    //strcat(a,b)
    //将b字符串追加到a字符串后面
    //如a=hello,b=world
    //strcat(a,b)
    //得到的a==helloworld

    printf("%s", s);
}
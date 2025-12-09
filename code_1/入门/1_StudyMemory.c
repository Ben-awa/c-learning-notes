//
// 第一段内容
//
#include <stdio.h>

 int main() {
     int a = 10 * 5;
     int b = 20, c = 30;
     int emu = a + b;
     // printf(emu);  直接打印不行
     printf("%d\n", emu);
     // printf("c means:%d",c);
     printf("a=%d,b=%d,c=%d",a,b,c);
     char d = 65;
     printf("%c",d);

     // char h = 10;
     // char h = '\n';
     // printf("%c",h);
     //以上，是转义符的两种用法

     const int f = 10;
     printf("%d",f);
 }

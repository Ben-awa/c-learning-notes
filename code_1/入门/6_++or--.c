#include <stdio.h>

int main() {
    int a = 10;
    //int b = a = a + 1;
    //printf("%d",b);

    //先a自己++，再给b赋值
    // int b = ++a;
    // printf("%d",a);
    //此处a的值为11

    //先b=a,再进行++
    // int b=a++;
    // printf("%d",a);
    //此处a的值为11

    //int b = a = a - 1;  //初始


    //int b = --a;
    //printf("a = %d",b);
    //输出a = 9


    // int b = a--;
    // printf("a = %d",b);
    //输出a = 10

    //复合赋值运算符
    // int b = a += 5;  //此处+=等效a = a + 5
    // printf("a = %d\n", b);

    //同理
    // int b = a % 3;
    // printf("a = %d", b); //除完余一

    printf("a = %d", a-- + --a);
    //a--先以a为值再--，故a--输出10的同时，a变为9
    //--a则是先--完再做值，即a = 9 - 1 = 8
    //综上以上=18
    //注意计算从左往右！
}
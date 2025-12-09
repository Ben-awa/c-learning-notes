//1.printf()函数
// #include <stdio.h>
//
// int main() {
//     const char str1[] = "Hello World"; //注意printf函数需要填写一个const char数组进去，也就是字符串
//     printf(str1);
// }

// 2.scanf()函数，（输入）
// #include <stdio.h>
//
// int main() {
//     char str2[10];
//     scanf("%s", str2);//使用scanf函数来接受控制台输入，并将输入的结果按照格式，分配给后续的变量
//     //比如这里我们想要输入一个字符串，那么依然是使用%s(和输出是一样的占位符), 后面跟上我们想要赋值的数组(存放输入的内容)
//     printf("输入的内容是: %s", str2);
// }
    //输数字
// #include <stdio.h>
//
// int main() {
//     int a, b;
//     scanf("%d",&a);  //连续扫描两个int数字
//     scanf("%d",&b);  //注意，如果不是数组类型，那么这里在填写变量时一定要在前面添加一个符号(至于为什么，下一章在指针小节中会
//     //详细介绍)这里的&不是做与运算，而是取地址操作
//
//     printf("输入的内容位%d",a);
//
// }

    //3.字符串专用函数gets()和puts():
// #include <stdio.h>
//
// int main() {
//     char str[10];
//     gets(str);
//     puts(str); //它打印完甚至还自动换了行，因为它把回车键也吸收了
// }

//当你想处理单个字符

#include <stdio.h>

int main() {
    char c;//
    c = getchar(); //作为返回值返回  //只能接受一个字符
    printf("%c", c);
    //当然也可以直接putchar(c);

    c = getchar(); //作为返回值返回  //只能接受一个字符
    printf("%c", c);
    //多输几次可以输出更多的字符
}

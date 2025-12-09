//函数自己调用自己称：递归
// #include <stdio.h>
//
// void test() {
//     printf("Hello World\n");
//     test(); //无限循环
// }
//
// int main() {
//     test();
// }

//函数调用栈：函数先进后出，都进完再依次出，无限循环就一直进，超出了栈所能承受范围，所以崩溃，这种问题称为栈溢出
//求某数阶乘
#include <stdio.h>

int test1(int a) {
    if (a == 1) {
        return 1;
    }
    else if (a - 1 != 0) {
        return a * test1(a - 1); //每次都让n乘以其下一级的计算结果，下一级就是n-1了  //我编的时候忘了a-1要加test1()
    }
}
int main() {
    int a;
    scanf("%d", &a);
    int target = test1(a);
    printf("%d\n", target);
}
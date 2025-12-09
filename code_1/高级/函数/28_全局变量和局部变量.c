// 全局变量与局部变量
// #include <stdio.h>
//
// void test();
//
// int main() {
//     int a = 10; //a是一个局部变量（因为作用域有限,只会在{}内生效，常见于各种循环）
// }
//
// void test() {
//     a += 10;
// }

// #include <stdio.h>
//
// int main() {
//     for (int i = 0;i < 10;i++) {
//
//     }
//
//     for (int i = 0;i < 10;i++) { //此处出现两个变量i，但是不冲突
//
//     }
// }

// #include <stdio.h>
//
// int main() {
//     int i; //想让变量i在整个函数中使用，只需要提出来在函数中定义
//     for (int i = 0 ; i < 10 ; i++) {
//         printf("%d\n",i);  //内部正常使用
//     }
//     i +=10; //外部也是正常使用
// }

#include <stdio.h>

int i; //实在不行，直接扔外面也可以的  ，这样就是  全   局   变    量  了。

void test(void);

int main() {
    for (int i = 0 ; i < 10 ; i++) {
        printf("%d\n",i);  //内部正常使用
    }
    i +=10; //外部也是正常使用
}

void test(void) {
    printf("%d\n",i);
}
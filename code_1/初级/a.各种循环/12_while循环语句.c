// while 只需要一个维持循环的条件

// #include <stdio.h>
// int main() {
//     while (1) { // 每次循环开始之前都会判断括号内的内容是否为真，如果是就继续循环
//         printf("Hello World\n"); //1 永远真，所以此处无限循环
//     }
// }

//while 循环，更多用在不明确结束时机的情况，for循环更多用于知道循环的情况
//如我想循环明确的10次，那就用for 如我只知道当i>10时结束循环，但不明确要循环几次，那就用while

// #include <stdio.h>
// int main() {
//     int i = 100;  // 现在我们想看看i不断除以2得到的结果是什么，但循环次数我们不明确
//     while (i > 0) {  // 现在唯一知道的是循环条件，只要大于0那么就可以继续除
//         printf("%d,", i);
//         i /= 2;  // 每次循环都除以2
//     }
// }

// #include <stdio.h>
// int main() {
//     int i = 100;  // 现在我们想看看i不断除以2得到的结果是什么，但循环次数我们不明确
//     while (i > 0) {  // 现在唯一知道的是循环条件，只要大于0那么就可以继续除
//         if (i < 30)break; //此处break和continue都能用
//         printf("%d,", i);
//         i /= 2;  // 每次循环都除以2
//     }
// }

// 可以用 do-while 语句，先执行循环内容，再做循环条件判断
#include <stdio.h>

// int main() {
//     do {  //无论满不满足循环条件，先执行循环体里面的内容
//         printf("Hello World\n");
//     } while (0);  // 再做判断，如果判断成功，开启下一轮循环，否则结束
//     // 此处0恒为假，所以只执行了一次
// }

// 正常用法：
// #include <stdio.h>
//
// int main() {
//     int i = 100;
//     do {
//         printf("Hello World,%d\n", i);
//         i /= 2;
//     } while (i > 0);
// }

// 欲求i的5次方
#include <stdio.h>

int main() {
    int i = 3, res = 1;
    for (int j = 0; j < 5; ++j) {
        res *= i;
    }
    printf("%d\n", res);
}
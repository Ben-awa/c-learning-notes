// 回文串判断
//回文串：一个正着读，反着读都一样的字符串 如ABA
//请你写一个C语言程序，判断用户输入的字符串（仅出现英文字符）是否为回问串

//我看了一下后做的:

// #include <stdio.h>
// #include <string.h>   //这是引入了啥?
//
// int main() {
//     char str[64];
//     gets(str);
//     //思路：比较两端的字符是否一致
//     int len = strlen(str); //获取字符串长度
//     for (int i = 0,c = 0; i < len; i++) {
//         if (str[i] = str[len - i]) {
//             ++c;
//         }
//         if (c == len-1) {
//             printf("%s是回文串!\n",str);  //有点bug
//         }
//     }
//
// }

#include <stdio.h>
#include <string.h>

int main() {
    char str[64];
    gets(str);
    int len = strlen(str), left = 0, right = len - 1; //没学指针看不懂喵

    _Bool flag = 1;

    while (left < right) {
        if (str[left] != str[right] ){
            flag = 0;
            break; //都不等了也没必要算了
        }
        left++;
        right--;
    }

    puts(flag ? "是回文串" : "不是回文串");   //所以_Bool类型原来是这么定义的？好突然
}
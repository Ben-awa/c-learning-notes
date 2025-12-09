// 字符串匹配
//现有两字符串：
// str1 = "abcdabbc"
// str2 = "cda"
// 现在请你设计一个C语言程序，判断第一个字符串中是否包含了第二个字符串，比如上面的例子中，很明显第一个字符串包含了第二个字符串

//先来暴力解法
#include <stdio.h>
#include <string.h>

int main() {
    char str1[64], str2[64];
    scanf("%s\n",str1), scanf("%s",str2);
    unsigned long len1 = strlen(str1), len2 = strlen(str2);

    _Bool flag = 0;
    for (int i = 0; i < len1 ; i++) {
        flag = 0;
        for (int j = 0; j < len2 ; j++) {
            if(str1[i+j] != str2[j]) {
                flag = 1;
                break;
            }
        }
        if(!flag) break;
    }
    puts(flag ? "不包含" : "包含" );  //!flag表flag = 0,是flag是flag = 1
}

//好难...记得有空再看看
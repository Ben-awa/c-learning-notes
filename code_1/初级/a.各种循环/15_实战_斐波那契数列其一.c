// 解出 斐波那契数列
// 感谢高人指点

#include <stdio.h>

int main() {
    int target = 7, result; // target是要获取的数,result是结果

    if (target == 1 & 2) {
        result = 1;
    }

    else {
        int a = 1, b = 1;
        result = 1 + 1; // 初始是target = 3
        for (int i = 1; i <= (target - 3); i++) {
            // 想法：来个变量储存上一次的值
            a = b;
            b = result;
            result = a + b;
        }
    }
    printf("%d", result);
}
//1 1 2 3 5 8 13 21 34 55

// 我改改
#include <stdio.h>

int main() {
    int target = 7, result; // target是要获取的数,result是结果

    int a = 0, b = 0;
    result = 1; // 初始是target = 1
    for (int i = 1; i < target; i++) {
        // 想法：来个变量储存上一次的值
        a = b;
        b = result;
        result = a + b;
    }
    printf("%d", result);
}

// 老师的思路其实一样吧
#include <stdio.h>

int main(){
  int target = 7, result;

  int a = 1, b = 1, c;
  for (int i = 2; i < target; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  result = c;

  printf("%d", result);
}
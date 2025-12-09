#include <stdio.h>

int main() {
    int target = 7;
    int fib[target];
    fib[0] = 1;
    fib[1] = 1;

    //欲求第target位的数据
    //fib[i] = fib[i-1] + fib[i-2]
    for (int i = 2; i < target; ++i) {
        fib [i] = fib[i - 1] + fib[i - 2];
    }
    printf("%d\n", fib[target-1]);
}
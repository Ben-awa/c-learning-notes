//打印九九 乘法表
#include <stdio.h>

int main() {
    for (int a = 1,b = 1 ; a,b <= 9; ) {
        int i = a * b;
        if (a < b) {
            printf("%d x %d = %d   ",a ,b ,i);
            ++a;
        }
        else if (a == b) {
            printf("%d x %d = %d\n",a ,b ,i);
            ++b , a = 1;
        }
    }
}

//老师的：
#include <stdio.h>

int main() {
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 10; ++j) { //双层循环
            if (i < j) break;
            printf("%d x %d = %2d", j, i, i * j);  // %2d强制占两位(居右),%-2d同，但(居左)
        }
        printf("\n");
    }

}

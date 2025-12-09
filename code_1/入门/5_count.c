#include <stdio.h>
int main(){
    int b,c;
    int a = (b = 5, c = b + 8); //逗号运算符从前往后依次执行，赋值结果是最后边的结果，这里也就按最后的值c作为结果
    printf("%d",a);
}

// ^表示几次方，2^2 =4,2^3=8
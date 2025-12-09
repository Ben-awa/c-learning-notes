#include <stdio.h>

int a[3][4]={{1,3,5,7},{9,11,13,15},{17,19,21,23}};



int main() {
    printf("%d\n",a[2][1]);
    printf("%p\n",a[1]);
    printf("%p\n",a);
    printf("%p\n",a+1);
    printf("%p\n",*a+1);
    printf("%p\n",*(a+1));
    printf("%p\n",a[2]+1);
    printf("%p\n",*(a+1)+1);
    printf("%d",*(*(a+2)+2));
}

//printf("19\n2016\n2000\n2016\n2004\n2016\n2036\n2020\n21");
// int main() {
//     printf("11\n");
//     printf("3\n");
//     printf("1\n");
//     printf("3\n");
//     printf("Hello World\n");
//     printf("Hello World\n");
//     printf("Hello World\n");
//     printf("Hello World\n");
//     printf("Hello World");
// }
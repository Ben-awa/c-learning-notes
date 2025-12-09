//函数的参数和返回
// #include <stdio.h>
//
// // 设定参数
// void sum(int, int); //函数原型中需要写上需要的参数类型，多个参数用逗号隔开，比如我们这里需要的就是两个int类型的参数
//
// int main() {
//     sum(1, 3);
// }
//
// void sum(int a, int b) {  //函数具体定义也要写上，这里的a和b我们称为形式参数 (形参) ,等价于函数中的局部变量,作用域仅限此函数
//     printf("%d\n",a + b);
// }

// ... 可变长参数

// #include <stdio.h>
//
// void swap(int, int); //swap表示转换
//
// int main() {
//     int a = 10, b = 20;
//     swap(a, b);//此处修改失败了
//
//     printf("a = %d, b = %d", a, b);
// }
//
// void swap(int a, int b) {
//     int tmp = a;  //这里对a和b的值进行交换
//     a = b;
//     b = tmp;
// printf("a = %d,b= %d",a,b); //可以看到对函数内生效
//  }


        //但是数组没这个问题...
// #include <stdio.h>
//
// void test(int arr[]);
//
// int main() {
//         int arr[] = {4, 3, 8, 2, 1, 7, 5, 6, 9, 0};
//         test(arr);
//         printf("%d", arr[0]); //打印的是修改后的值了
// }
//
// void test(int arr[1]) {
//         arr[0] = 999; //数组就可以做到这边修改，外边生效
// }

// #include <stdio.h>
//
// void test(int a) {
//         a += 10;
//         printf("%d\n", a);
// }
//
// int main() {
//         int a = 10;
//         test(a);
//         test(a);  //结果是20而非30，原因：a(局部变量)在里面加完就输出了，没有继承到下一条函数中
// }

//解决？
// #include <stdio.h>
//
// void test() {
//         static int count = 0;  //static表示公用的(静态)，会保留上一次函数的值
//         printf("函数被调用第 %d 次\n", ++count);
// }
//
// int main() {
//         test();
//         test();
// }

// //欲要返回值
// #include <stdio.h>
//
// int sum(int, int);  //现在我们要返回a和b的和（那么肯定也是int类型）所以这里需要将返回值类型修改为int
//
// int main() {
//     int i = sum(5, 7) * 2; //计算a和b的和
//     printf("%d", i);  //函数执行后，会返回一个int类型的结果，我们可以接收它，也可以像下面一样直接打印，当然也可以参与运算等等
// }
//
// int sum(int a, int b) {
//     int c = a + b;
//     return c; //return关键字，返回结果
// }


//想通过函数找到数组中第一个小于的数，并将其返回，如果没有，返回0
// #include <stdio.h>
//
// int FindMin(int arr[],int len);
//
// int main() {
//         int arr[] = {1, 4, -9, 2, -4, 7};
//         int min = FindMin(arr, 6);
//         printf("第一个小于0的数是%d", min);
// }
//
// int FindMin(int arr[],int len) {
//         for(int i = 0; i < len ; i++) {
//                 if (arr[i] <= 0) {
//                         return arr[i];//当判断找到后，直接return返回即可，这样的话函数会直接返回结果，无论后面还有没
//                         //有代码没有执行完，整个函数都会直接结束
//                 }
//         }
//         return 0; //上述if不满足就返回0
// }

//带返回值（非void）的函数中的所有情况都要有一个对应的返回值
// #include <stdio.h>
//
// int test(int a) {
//         if (a > 0) {
//                 return 10;  //当a大于0时有返回语句
//         }
//         else {
//               //但是当a不大于0时就没有返回值了，这样虽然可以编译通过，但是会有警告（黄标），运行后可能会出现一些无法预知的问题
//         }
// }

//如果时没有返回值的函数，我们也可以调用return来返回，不过默认情况下是可以省略的:
#include <stdio.h>

void test(int a) {
        if(a == 10) return; //因为是void，所以什么都不需要加，直接return
        printf("%d\n", a);
}
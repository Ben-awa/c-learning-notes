//1.
//#include <stdio.h>
//int main() {
//    int a=10;
//    int *pa= &a;//取地址
//    printf("值为%d\n",*pa); //将pa地址的值取出
//    printf("a在内存中的地址为:%p\n",&a);
//    printf("a在内存中的地址为:%p\n",pa);
//    //6、7行的输出结果一致（因为第二行的表达式)  //地址用%p表示
//    return 0;
//}

//2.
//#include <stdio.h>
//int main() {
//    int * a=NULL;
//    //不给指针赋值就赋一个NULL表示空指针，不指向任何内容
//}

//3.
//#include <stdio.h>
//int main(){
//  int a =9;
//  int *p = &a;
//  *p = 20; //此处从地址上直接更改a的值
//  printf("%d",a);
//
//}

//4.
/*
 * const(翻译是：常量)的使用
 */


//先是正常的
// #include <stdio.h>
// int main() {
//     int a = 9,b  = 10;
//     int * p = &a;
//     *p= 20; //(改指向)
//     p = &b;//（改地址）
//     printf("%d\n%d",a,b);
// }

/*然后，对于 const int * p = &a; 格式：
 * 可以改指向（的地址）
 * 不能改（地址的）数值
 */
// #include <stdio.h>
// int main() {
//  int a = 9,b  = 10;
//  const int * p = &a;
//  //*p= 20; //(改地址的值)  //会报错
//  p = &b;//（改指向）
//  printf("%d\n%d",a,b);
// }

/*然后，对于 int * const p = &a; 格式：
 * 不能改指向（的地址）
 * 可以改（地址的）数值
 */
// #include <stdio.h>
// int main() {
//  int a = 9,b  = 10;
//  int *  const p = &a;
//  *p= 20; //(改地址的值)
//  //p = &b;//（改指向） //会报错
//  printf("%d\n%d",a,b);
// }

/*而对于 const int * const p = &a; 格式：
 * 不能改指向（的地址）
 * 也不能改（地址的）数值
 */
// #include <stdio.h>
// int main() {
//     int a = 9,b  = 10;
//      const int *  const p = &a;
//     //*p= 20; //(改地址的值)   //会报错
//     //p = &b;//（改指向） //会报错
//     printf("%d\n%d",a,b);
// }
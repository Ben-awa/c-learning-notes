#include <stdio.h>
int main(){
//先是隐性的（自动的）转换

    // (1)
    // short s = 10;
    // int i = s;
    // float a = 3;

    // (2)
    // int a = 511;
    // char b = a; //最大127
    // printf("%d\n", b);

    //511-int-00000000 00000001 11111111
    //char 只容纳8位前面都没了 11111111 即-1的补码形式

    // (3)
    // int a = 99;
    // double d =a;
    // printf("%f",d);
    //
    // double b =3.14;  //小数到整数，直接丢失小数位
    // int i = b;
    // printf("%d",i);

    // (4)
    // float a = 2;
    // int b = 3;
    // double c = b / a;
    // printf("%f\n", c);

    //char与short类型在参与运算时一律转换为int再进行运算
    //浮点类型默认用双精度（自动变成double类型）计算
    //当有一个更高优先级的类型与较低的同时运算时，统一用高优先级的运算

    //优先级顺序:char / short → int → unsigned int → long → double ←← float
    // (5)
    // int a = 10, b =3;
    // double c = a / b;
    // printf("%f", c);
    //此处得到3.000000 是因为double c 取的是int类型的a与b运算后的值3，想避免如此，则：

    // double a = 10, b = 3;
    // double c = a / b;
    // printf("%f", c);
    //此处改变后即可得到3.333333

    //然后是强制（手动）的转换
    // int a = (int) 2.5; //2.5是double类型的，强制转换int类型赋值后给了a,转换后 导致 小数部分丢失
    // printf("%d", a);
    //得2

    //同理，也可以对算式的结果转换类型

    // double a = 3.14;
    // int b = (int) (a +2.8);
    // //此处,(int) (a +2.8)得到的是对(a +2.8)的值进行int转换得到的
    // //若是(int)a +2.8，则为进行int类型转换后的a与2.8的和
    // printf("%d",b);
    //注意此处为int类型，只保留整数位，且 不 进 行  四  舍  五  入  ！

    //int a = 10, b =3;
    // double c = a / b;
    // printf("%f", c);
    //同样是这个问题，另一个方法：
    int a = 10, b =3;
double c = (double)a / b;
printf("%f", c);
//只要a为double类型，那么b也自然会转换为double类型运算，保留小数的目的就达成了
}
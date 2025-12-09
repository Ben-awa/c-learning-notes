// 初始
#include <stdio.h>

int main() {
    int arr[10] = {3, 5, 7, 2, 9, 0, 6, 1, 8, 4};  //乱序的
    //请缩写代码对以上数组进行排序
    //for (int i = 0; i < 10; i++) { //初始
    for (int i = 0; i < 9; i++) { //最后一轮没必要
        //for (int j = 1; j < 10; j++) {  //初始
        _Bool flag = 0;
        for (int j = 1; j < 10 - i; j++) { //优化后不用比较已经排好的
            if(arr[j] < arr[j - 1]) {
                int a = arr[j - 1];  // 通过反复赋值交换
                arr[j - 1] = arr[j];
                arr[j] = a;
                flag = 1;
            }
        }
        if (flag == 0) break; //有序直接停下
    }
    for (int i = 0; i < 10; i++) {
        printf("%d  ",arr[i]);
    }
}
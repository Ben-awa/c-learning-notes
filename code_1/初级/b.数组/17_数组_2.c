// #include <stdio.h>
//
// int main() {
//     int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//     // 请找出12个月中大于30个月的天数，并输出
//     for (int i = 0; i < 12; i++) {
//         int days = arr[i];
//         if (days > 30) {
//             printf("%d 月是大于30天的月\n", (i+1));
//         }
//     }
// }

#include <stdio.h>

int main() {
    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    // 现在请你将低于31天的元素，修改为0
    for (int i = 0; i < 12; ++i) {
        if (arr[i] < 31) {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < 12; ++i) {
        printf("%d, ", arr[i]);
    }
}
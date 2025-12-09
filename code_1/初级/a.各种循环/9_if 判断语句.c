#include <stdio.h>

// int main() {
//     int i = 0;
//     if(i > 20) {
//         printf("WE DID IT!\n"); //如果只有1行，那么不写{}也是一样的
//     }else if (i == 0) {
//         printf("3Q\n");
//     }else {
//         printf("LBWNB\n");
//     }
//     printf("Hello World?");
// }

int main() {
    int score = 61;
    if (score < 60) {  // 先判断不及格
        if (score > 30) {
            printf("learn the c++");
        }
        else {
            printf("0dnene0721");
        }
    }
    else {
        printf("you are good,just come to study Python!");
    }
}
#include <stdio.h>
int main(){
    char c = 'A';
    switch(c) {  //switch,好处：可精确匹配某个值，坏处：不能进行范围判断
        case 'A':
            printf("YOU ARE MY SPECIAL");
        break;  //一定每次都加break来结束
        case 'B':
            printf("You are good");
        break;
        case 'C':
            printf("SB");
        break;
        default: //上述都没有
            printf("YOU are stupid");
        break;
    }
}
// 当然switch 里面也能塞点if进去
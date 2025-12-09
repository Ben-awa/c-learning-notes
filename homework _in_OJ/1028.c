//自己写的
#include<stdio.h>
int flag(unsigned int x);

int main (){
    int i,d;
    for(i=2;i<=200;i++) {
        d=flag(i);
        if (d==1) printf("%d\n",i);
    }
}

int flag(unsigned int x) {
    int j,flag=0;
    for(j=2;j<=200;j++) {
        if(x!=j) {
            if(x%j==0) {
                break;
            }
        }
        else flag=1;
    }
    return flag;
}
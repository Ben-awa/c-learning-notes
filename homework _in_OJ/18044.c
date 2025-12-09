#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>=0) {
        if(a>100) {
            printf("error");
            return 0;
        }
        else if(a<60) printf("E");
        else if(a>=60) {
            if(a<70) printf("D");
            else {
                if(a<80) printf("C");
                else {
                    if(a<90) printf("B");
                    else {
                        if(a<=100) printf("A");
                        else  {
                            printf("error");
                            return 0;
                        }
                    }
                }
            }
        }


    }
    else printf("error");return 0;
}
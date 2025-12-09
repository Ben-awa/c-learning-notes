#include <stdio.h>
#include <math.h>
int main() {
    float a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    int num;
    float result1,result2,Ed;
    scanf("%f%f%f%f%f%f%f%f%f%f",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);
    float arr[10]={a1,a2,a3,a4,a5,a6,a7,a8,a9,a10};
    for(int j=0;j<9;j++) {
        _Bool flag=0;
        for (int i=0;i<10;i++) {
            if (arr[i]<arr[i+1]) {
                num=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=num;
                flag=1;
            }
            if (flag == 0) break;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%.2f  ",arr[i]);
    }

    result1=arr[0]-arr[1];
    result2=arr[1]-arr[2];
    if(result1>result2) Ed=result2;
    else Ed=result1;

    for(int j=1;j<9;j++) {
        result2=arr[j+1]-arr[j+2];
        if (Ed>result2) Ed=result2;
    }
    printf("%.2f",Ed);

}
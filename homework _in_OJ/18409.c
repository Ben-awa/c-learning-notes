#include  <stdio.h>

int main() {
    int n,num=0;
    int i,j;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<=n-1;i++) {
        scanf("%d",&a[i]);
    }
    //排序:负:0/正则左移；正:非正右移，否则不动;0遇0不动
    for (i=0;i<n-1;i++) {
        for (j=0;j<=n-1;j++) {
            if (a[j]==0) {
                if (a[j+1]<0) {
                    num = a[j];
                    a[j]=a[j+1];
                    a[j+1]=num;
                }
            }
            if(a[i]>0) {
                if (a[i+1]<=0) {
                    num = a[i];
                    a[i]=a[i+1];
                    a[i+1]=num;
                }
            }
        }

    }
    for (i=0;i<=n-1;i++) {
        printf("%d ",a[i]);
    }
}

//不知道出什么bug了，"冒泡排序"(虽然也不能这么叫就是了)不是很成功.
#include<stdio.h>

#include<stdlib.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(j=0;j<n;j++)//循环一次代表打完一行。第一个for打的是上半部分的两行
    {
        for(i=0;i<n-j;i++){ //n-j需要自己去计算
            printf(" ");
        }
        for(i=0;i<2*j+1;i++){ //2*j+1需要自己去计算
            printf("*");
        }
        printf("\n");//注意换行应该在for里面，一起参与循环，因为循环一次之后就要换行
    }

    for(i=0;i<2*n+1;i++)//第二个for打的是中间的一行
    {
        printf("*");
    }
    printf("\n"); //注意这个应该在for外面而不是里面，不懂的可以和第一个for对比一下，道理是一样的

    for(j=0;j<n;j++) //第三个for打的是图形的下半部分的两行，注意事项和第一个for类似，道理也相同，难点在于找到循环次数的规律
    {
        for(i=0;i<j+1;i++)
        {
            printf(" ");

        }
        for(i=0;i<2*(n-j)-1;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
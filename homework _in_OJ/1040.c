#include <stdio.h>

int main()
{
    int arr[20],count=0,j;

    for (int i = 0; i < 20; i++)
    {
        scanf("%d",&arr[i]);
        for (j = 0; j < i; j++)
        {
            if (arr[j]==arr[i]) break;
        }
        if (j==i) count++;
    }
    printf("%d",count);
}
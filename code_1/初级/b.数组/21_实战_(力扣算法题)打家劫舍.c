//先跳了，回头有空再来看（29P）

#include <stdio.h>

int main(){
    int arr[] = {2, 7, 9, 3, 1}, size = 5 ,result;

    int dp[size];
    dp[0] = arr[0];
    dp[1] = arr[1] > arr[0] ? arr[1] : arr[0];

    for(int i = 2; i < size; i++){
        dp[i] = dp[i - 1] > dp[i - 2] + arr[i] ? dp[i - 1] : dp[i-2] + arr[i];
    }

    // dp[i]=max(dp[i-1],dp[i-2]+vallue[i])
    result = dp[size - 1];
    printf("%d", result);
}
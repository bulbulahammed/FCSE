
#include<stdio.h>
#include <stdlib.h>

int main(){
    int N;
    scanf("%d",&N);
    long long arr [N];
    long long sum = 0;
    for(int i=0; i<N; i++ ){
        scanf("%lld",&arr[i]);
        sum = sum + arr[i];
    }
        printf("%lld", llabs(sum));
    return 0;
}
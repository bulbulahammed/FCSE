#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    if(N % 3 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
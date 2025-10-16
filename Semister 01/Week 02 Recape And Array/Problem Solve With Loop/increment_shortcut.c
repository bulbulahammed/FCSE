#include<stdio.h>

int main(){

    int N;
    // N = N + 1;
    scanf("%d", &N);
    int increment = N+= 1;
    printf("%d\n", increment);
    int incrementTwo = N+= 2;
    printf("%d\n", incrementTwo);
    int incrementFive = N+= 5;
    printf("%d\n", incrementFive);
    // Multiple
    //  N=N*3;
    // Multiple By two
    int Multiple = N*=2;
    printf("%d", Multiple);
    return 0;
}
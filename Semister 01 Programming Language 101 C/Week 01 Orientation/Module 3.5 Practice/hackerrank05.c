#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    if(N > 1000){
        printf("I Will Buy Punjabi");
         N = N - 1000;
        if(N >= 500){
         printf("I will buy shoe.\nAlisha will buy shoe.");
        }
    }else{
        printf("Bad luck!");
    }
    return 0;
}
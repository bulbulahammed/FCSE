#include<stdio.h>

int main(){

    int X;
    scanf("%d", &X);
    int firstTwoDigits = X / 100;
    printf("First two digit: %d\n", firstTwoDigits);
    return 0;
}
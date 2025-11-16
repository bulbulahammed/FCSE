#include<stdio.h>

int main(){

    int X;
    scanf("%d", &X);
    // → The % (modulus) operator gives the remainder when X is divided by 10.
    // → That remainder is always the last digit of X.
    int lastDigit = X % 10;
    printf("Last Digit: %d\n", lastDigit);
    return 0;
}
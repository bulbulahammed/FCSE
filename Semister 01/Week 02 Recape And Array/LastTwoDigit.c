#include<stdio.h>

int main(){

    int X; 
    scanf("%d", &X);
        // → The % (modulus) operator gives the remainder when X is divided by 100.
    // → That remainder is always the last tow digits of X.
    int lastTwoDigits = X % 100;
    printf("Last two digit is: %d\n", lastTwoDigits);
}
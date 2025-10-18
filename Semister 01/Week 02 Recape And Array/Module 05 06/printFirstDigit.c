#include<stdio.h>

int main(){

    int X;
    scanf("%d", &X);
    // 👉 Put a zero after one for each digit you want to drop.
    int firstDigit = X / 1000;
    
    printf("Your first digit is : %d\n", firstDigit);
    return 0;
}
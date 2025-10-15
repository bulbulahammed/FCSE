// An ASCII value is a numerical code assigned to a character, such as a letter, number, or symbol, to represent it in a computer.
//American Standard Code for Information Interchange
// Example
#include<stdio.h>

int main (){

    int anyNum;
    scanf("%d", &anyNum);
    // using %c format specifiers to show the ASCII value of Number.
    printf("%c", anyNum);
    return 0;
}
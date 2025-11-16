// An ASCII value is a numerical code assigned to a character, such as a letter, number, or symbol, to represent it in a computer.
//American Standard Code for Information Interchange
// Example
#include<stdio.h>

int main (){

    char anyCharacter;
    scanf("%c", &anyCharacter);
    // using %d format specifiers to show the ASCII value or character.
    printf("%d", anyCharacter);
    return 0;
}
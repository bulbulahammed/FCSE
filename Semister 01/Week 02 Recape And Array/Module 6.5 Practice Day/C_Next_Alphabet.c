// Given a lowercase alphabet character. You have to print the next character in the alphabet.
// Input
// Only one line containing a lowercase English letter C
// .
// Output
// Print the next letter to C
//  in the alphabet.

#include<stdio.h>

int main(){
    char inputChar;
    scanf("%c", &inputChar);
    if(inputChar >= 'a' && inputChar < 'z'){
        printf("%c",inputChar+1);
    }else if(inputChar=='z'){
        printf("a");
    }
    return 0;
}
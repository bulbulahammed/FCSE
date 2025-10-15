#include<stdio.h>

int main(){

    char inputChar;
    scanf("%c", &inputChar);
    if(inputChar >= 'a' && inputChar <= 'z'){
        inputChar = inputChar - 32;
        printf("%c", inputChar);
    }else{
        inputChar = inputChar + 32l;
        printf("%c", inputChar);
    }
    return 0;
}
#include<stdio.h>

int main(){

    char anyCharacter;
    scanf("%c", &anyCharacter);
    if(anyCharacter >= 48 && anyCharacter <= 57 ){
        printf("IS DIGIT");
    }else{
        if(anyCharacter >= 65 && anyCharacter <= 90){
            printf("ALPHA\nIS CAPITAL");
        }else{
            if(anyCharacter >= 97 && anyCharacter <= 122){
            printf("ALPHA\nIS SMALL");
        }
    }  
}
    return 0;
}
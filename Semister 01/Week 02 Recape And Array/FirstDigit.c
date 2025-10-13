#include<stdio.h>

int main(){

    int X;
    scanf("%d", &X);
    X = X / 1000;
    if(X % 2 == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    return 0;
}
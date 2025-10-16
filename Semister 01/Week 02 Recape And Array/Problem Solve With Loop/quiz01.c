// How many times “hi” will be printed for the following code snippet?
#include<stdio.h>

int main(){

    for(int i=0; i<=10; i++){
        printf("hi\n");
        if(i>2){
            break;
        }
    }
    return 0;
}
//9. How many times “hi” will be printed for the following code snippet?
#include<stdio.h>

int main(){

    for(int i=0; i<=10; i++){
        if(i>2){
            break;
        }
        printf("hi ");
    }
    return 0;
}
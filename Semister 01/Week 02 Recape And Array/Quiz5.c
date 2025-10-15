//5. If marks = 76, Then what will be the output of the following code snippet?

#include<stdio.h>

int main(){
    int marks;
    scanf("%d", &marks);

    if(marks >= 80){
        printf("A+");
    }else if(marks >= 70){
        printf("A");
    }else if(marks >= 60){
        printf("A-");
    }

    return 0;
}
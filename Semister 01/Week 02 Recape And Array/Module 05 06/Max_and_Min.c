#include<stdio.h>

int main(){

    int A,B,C;
    scanf("%d %d %d", &A,&B,&C);
    //Find Minimum
    if(A <= B && A <= C){
        printf("%d ", A);
    }else if(B <= A && B <= C){
        printf("%d ",B);
    }else if(C <= A && C <= B){
        printf("%d ", C);
    }
    //Find Maximum
    if(A >= B && A >= C){
        printf("%d", A);
    }else if(B >= A && B >= C){
        printf("%d",B);
    }else if(C >= A && C >= B){
        printf("%d", C);
    }
    return 0;
}
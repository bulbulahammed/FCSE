#include<stdio.h>

int main(){

    int N;
    scanf("%d",&N);
    int A[N];
    int PositiveSum = 0;
    int NegativeSum = 0;
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
        if(A[i]>0){
          PositiveSum = PositiveSum + A[i];
        }else if(A[i]<0){
           NegativeSum = NegativeSum + A[i];
        }
    }
    printf("%d %d",PositiveSum,NegativeSum);
    return 0;
}

    // if(PositiveSum == 0){
    //     printf("%d",NegativeSum);
    // }else if(NegativeSum==0){
    //     printf("%d",PositiveSum);
    // }else{
    //     printf("%d %d",PositiveSum,NegativeSum);
    // }
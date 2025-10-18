#include<stdio.h>

int main(){

    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    int targetIndex;
    int newValue;
    scanf("%d %d", &targetIndex, &newValue);
    A[targetIndex]=newValue;
    for(int i=N-1;i>=0;i--){
        printf("%d ",A[i]);
    }
    return 0;
}
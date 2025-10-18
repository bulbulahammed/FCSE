#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int minValue = arr[0];
    int minPos = 0;
    for(int i=0;i<N;i++){
        if(minValue > arr[i]){
          minValue = arr[i];
          minPos = i;
        }
    }
    printf("%d %d",minValue,minPos + 1);
    return 0;
}
#include<stdio.h>

int main(){
    int arr[5];
    // scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4] );
    // We Can do it simply with for loop.
    for(int i = 0; i<=4; i++){
        scanf("%d", &arr[i]);
    }
    // printf("%d %d %d %d %d",arr[0] ,arr[1], arr[2], arr[3], arr[4] );
    // We can print using for loop
    for(int i = 0; i<=4; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
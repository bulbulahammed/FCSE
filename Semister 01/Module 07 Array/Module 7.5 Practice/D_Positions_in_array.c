
#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
                if(arr[i] <= 10 ){
        printf("A[%d] = %d\n",i,arr[i]);
    }
    }
    return 0;
}

// Same problem with two loop
// #include<stdio.h>

// int main(){
//     int N;
//     scanf("%d",&N);
//     int arr[N];
//     for(int i=0;i<N;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<N;i++){
//         if(arr[i] <= 10 ){
//         printf("A[%d] = %d\n",i,arr[i]);
//     }
//     }
//     return 0;
// }

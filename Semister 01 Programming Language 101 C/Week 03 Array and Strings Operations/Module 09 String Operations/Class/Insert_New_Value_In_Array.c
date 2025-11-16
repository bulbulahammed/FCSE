// #include <stdio.h>

// int main()
// {
//     int N;
//     scanf("%d", &N);
//     // We have to add 1 with the input array size, because we are going to insert a new value.
//     // After Declare Array we can not Add/Reduce Array Size
//     int Arr[N + 1];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &Arr[i]);
//         // printf("%d ",Arr[i]);
//     }
//     int targetIndex, newValue;
//     scanf("%d %d", &targetIndex, &newValue);
//     // printf("\n%d %d",targetIndex,newValue);
//     for (int i = N; i >= targetIndex + 1; i--)
//     {
//         Arr[i] = Arr[i - 1];
//     }
//     Arr[targetIndex] = newValue;
//     // for(int i=0;i<=N;i++){
//     for (int i = 0; i < N + 1; i++)
//     {
//         printf("%d ", Arr[i]);
//     }
//     return 0;
// }

/*======================Clean Version Of this Code========================*/

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int Arr[N + 1];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Arr[i]);
    }
    int targetIndex, newValue;
    scanf("%d %d", &targetIndex, &newValue);
    for (int i = N; i >= targetIndex + 1; i--)
    {
        Arr[i] = Arr[i - 1];
    }
    Arr[targetIndex] = newValue;
    for (int i = 0; i <= N; i++)
    {
        printf("%d ", Arr[i]);
    }
    return 0;
}
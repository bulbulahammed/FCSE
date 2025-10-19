#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int Arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Arr[i]);
    }
    // Solve with while loop
    // int I = 0;
    // int J = N - 1;
    // while (I < J)
    // {
    //     int tmp = Arr[I];
    //     Arr[I] = Arr[J];
    //     Arr[J] = tmp;
    //     I++;
    //     J--;
    // }
    // solve with for loop
    for (int I = 0, J = N - 1; I < J; I++, J--)
    {
        int tmp = Arr[I];
        Arr[I] = Arr[J];
        Arr[J] = tmp;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", Arr[i]);
    }
    return 0;
}
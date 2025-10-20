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
    int tmp;
    for (int I = 0, J = N - 1; I < J; I++, J--)
    {
        tmp = Arr[I];
        Arr[I] = Arr[J];
        Arr[J] = tmp;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", Arr[i]);
    }
    return 0;
}
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
    int I;
    I = 0;
    int J;
    J = N - 1;
    int tmp;
    while (I < J)
    {
        tmp = Arr[I];
        Arr[I] = Arr[J];
        Arr[J] = tmp;
        I++;
        J--;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", Arr[i]);
    }
    return 0;
}
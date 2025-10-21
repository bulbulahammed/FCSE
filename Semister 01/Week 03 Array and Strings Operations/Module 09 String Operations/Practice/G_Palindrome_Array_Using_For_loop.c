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
    int J;
    for (I = 0, J = N - 1; I < J; I++, J--)
    {
        if (Arr[I] != Arr[J])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
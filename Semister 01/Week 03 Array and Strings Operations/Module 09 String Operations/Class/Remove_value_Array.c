#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    printf("%d\n", N);
    int Arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Arr[i]);
    }
    int targetIndex;
    scanf("%d", &targetIndex);

    for (int i = targetIndex; i < N - 1; i++)
    {
        Arr[i] = Arr[i + 1];
    }
    for (int i = 0; i < N - 1; i++)
    {
        printf("%d ", Arr[i]);
    }
    return 0;
}
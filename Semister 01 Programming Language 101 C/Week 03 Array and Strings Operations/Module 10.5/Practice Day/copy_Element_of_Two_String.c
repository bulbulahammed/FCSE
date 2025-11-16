#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int M;
    scanf("%d", &M);
    int B[M];
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &B[i]);
    }

    int C[N + M];
    for (int i = 0; i < N; i++)
    {
        C[i] = A[i];
    }
    for (int i = 0; i < M; i++)
    {
        C[N + i] = B[i];
    }
    for (int i = 0; i < N + M; i++)
    {
        printf("%d ", C[i]);
    }
    return 0;
}
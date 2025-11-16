#include <stdio.h>

void hello(int i, int N)
{
    if (i == N + 1)
    {
        return;
    }
    printf("%d\n", i);
    hello(i + 1, N);
}

int main()
{
    int i = 1;
    int N;
    scanf("%d", &N);
    hello(i, N);
    return 0;
}
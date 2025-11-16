#include <stdio.h>

void display(int N)
{
    for (int i = 1; i <= N; i++)
    {
        printf("%d", i);
        if (i < N)
        {
            printf(" ");
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    display(N);
    return 0;
}
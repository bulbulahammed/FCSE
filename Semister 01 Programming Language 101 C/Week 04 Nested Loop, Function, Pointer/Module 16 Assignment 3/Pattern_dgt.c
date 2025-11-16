#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int space = N - 1;
    int dgt = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = dgt; j >= 1; j--)
        {
            printf("%d", j);
        }
        if (i != N - 1)
            printf("\n");
        space--;
        dgt++;
    }
    return 0;
}
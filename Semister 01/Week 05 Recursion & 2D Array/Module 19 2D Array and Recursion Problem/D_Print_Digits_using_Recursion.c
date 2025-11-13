#include <stdio.h>
void rec(int N)
{
    if (N == 0)
    { // Base Case to stop recursion.
        return 0;
    }
    rec(N / 10);
    int lastDigit = N % 10;
    printf("%d ", lastDigit);
}
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);
        if (N == 0)
        {
            printf("0");
        }
        rec(N);
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int value = 1;
    int space = N - 1;
    for (int i = 1; i <= N; i++) // To print line.
    {
        for (int j = 1; j <= space; j++) // To print space.
        {
            printf(" ");
        }
        for (int j = 1; j <= value; j++) // To print value
        {
            printf("%d", j);
        }
        printf("\n");
        value++;
        space--;
    }
    return 0;
}
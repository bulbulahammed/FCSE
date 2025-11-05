

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int star = 1;
    int space = N - 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        star += 2;
    }
    int space2 = 0;
    int star2 = 2 * N - 1;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= space2; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star2; j++)
        {
            printf("*");
        }
        printf("\n");
        space2++;
        star2 -= 2;
    }

    return 0;
}
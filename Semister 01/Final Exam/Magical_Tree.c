#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int triangleHeight = N + 5;

    for (int i = 0; i < triangleHeight; i++)
    {

        int stars = 2 * i + 1;

        int totalWidth = 2 * (triangleHeight - 1) + 1;

        int spaces = (totalWidth - stars) / 2;

        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    int trunkWidth = N;
    int totalWidth = 2 * (triangleHeight - 1) + 1;
    int trunkSpaces = (totalWidth - trunkWidth) / 2;

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < trunkSpaces; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < trunkWidth; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
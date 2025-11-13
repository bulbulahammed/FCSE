#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int myArray[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &myArray[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = c - 1; j >= 0; j--)
        {
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}
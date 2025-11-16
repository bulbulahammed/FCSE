#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d%d", &r, &c);
    int myArray[r][c];
    // 2D Array take input
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &myArray[i][j]);
        }
    }

    int last_row = r - 1;
    int last_col = c - 1;

    for (int i = 0; i < c; i++)
    {
        printf("%d ", myArray[last_row][i]);
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        printf("%d ", myArray[i][last_col]);
    }
    return 0;
}
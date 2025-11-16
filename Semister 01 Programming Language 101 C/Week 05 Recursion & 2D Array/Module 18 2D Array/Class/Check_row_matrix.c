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
    if (r == 1)
    {
        printf("This is a row matrix.");
    }
    else
    {
        printf("This is not a row matrix.");
    }
    return 0;
}
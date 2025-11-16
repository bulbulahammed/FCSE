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
    // Specific Row input
    int specific_row;
    scanf("%d", &specific_row);
    // Specific Row Print
    for (int i = 0; i < c; i++)
    {
        printf("%d ", myArray[specific_row][i]);
    }
    return 0;
}
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
    // Specific column input
    int specific_column;
    scanf("%d", &specific_column);
    // Specific Column Print
    for (int i = 0; i < r; i++)
    {
        printf("%d \n", myArray[i][specific_column]);
    }
    return 0;
}
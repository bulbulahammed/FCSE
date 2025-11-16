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
    int total_value = r * c;
    int zero = 0;
    // zero count
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (myArray[i][j] == 0)
            {
                zero++;
            }
        }
    }
    if (total_value == zero)
    {
        printf("This is a zero matrix.");
    }
    else
    {
        printf("This is not a zero matrix.");
    }
    return 0;
}
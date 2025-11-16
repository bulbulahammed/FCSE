/*To check primary diagonal first of all it's need to be square then
outside diagonal value must be zero
 Inside diagonal means upper left corner to right down corner, rest are outsite diagonal. inside diagonal row index == column index*/
#include <stdio.h>
#include <stdbool.h>

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

    // Check if it is a Square matrix, it's first condition to be diagonal
    bool is_diagonal = true;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    // We are inside diagonal
                }
                else
                {
                    // We are outside diagonal
                    if (myArray[i][j] != 0)
                    {
                        is_diagonal = false;
                    }
                }
            }
        }
        if (is_diagonal == true)
        {
            printf("This Is A Primary Diagonal Matrix\n");
        }
        else
        {
            printf("This is not Primary Diagonal Matrix\n");
        }
        // Square Matrix, first condition to be diagonal
    }
    else
    {
        // Not Square, so it' not Diagonal Matrix
        printf("This is not Primary Diagonal Matrix\n");
    }
    return 0;
}
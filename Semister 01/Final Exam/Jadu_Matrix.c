#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d%d", &r, &c);
    int myArray[r][c];

    // Take input
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &myArray[i][j]);
        }
    }

    bool Is_JaduMatrix = true;

    // Must be square
    if (r != c)
        Is_JaduMatrix = false;
    else
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                // Check inside Primary and Secondary diagonal
                if (i == j || i + j == r - 1)
                {
                    if (myArray[i][j] != 1)
                    {
                        Is_JaduMatrix = false;
                        break;
                    }
                }
                // Check outside diagonal
                else
                {
                    if (myArray[i][j] != 0)
                    {
                        Is_JaduMatrix = false;
                        break;
                    }
                }
            }

            if (!Is_JaduMatrix)
                break;
        }
    }

    if (Is_JaduMatrix)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

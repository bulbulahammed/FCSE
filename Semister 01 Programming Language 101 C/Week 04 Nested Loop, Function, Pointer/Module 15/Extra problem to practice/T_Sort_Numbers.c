#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int x = A, y = B, z = C;

    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    if (y > z)
    {
        int temp = y;
        y = z;
        z = temp;
    }
    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    printf("%d\n%d\n%d\n\n", x, y, z);

    printf("%d\n%d\n%d\n", A, B, C);

    return 0;
}

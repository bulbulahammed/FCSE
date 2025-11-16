#include <stdio.h>

int main()
{
    int TestCase;
    scanf("%d", &TestCase);
    int width;
    int height;
    for (int i = 0; i < TestCase; i++)
    {
        scanf("%d %d", &width, &height);
        if (width == height)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char A[101], B[101];
    scanf("%s%s", &A, &B);
    printf("%d\n", strcmp(A, B));
    int val = strcmp(A, B);
    if (val < 0)
    {
        printf("A is smaller");
    }
    if (val > 0)
    {
        printf("B is smaller");
    }
    if (val == 0)
    {
        printf("A and B are equal");
    }
    return 0;
}
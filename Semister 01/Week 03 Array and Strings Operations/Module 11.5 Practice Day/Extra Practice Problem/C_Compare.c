#include <stdio.h>
#include <string.h>

int main()
{
    char A[21], B[21];
    scanf("%s%s", &A, &B);
    int different = strcmp(A, B);
    if (different < 0)
    {
        printf("%s", A);
    }
    if (different > 0)
    {
        printf("%s", B);
    }
    if (different == 0)
    {
        printf("%s", A);
    }
    return 0;
}
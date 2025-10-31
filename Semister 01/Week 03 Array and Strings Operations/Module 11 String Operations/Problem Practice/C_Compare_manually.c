#include <stdio.h>

int main()
{
    char A[21], B[21];
    scanf("%s%s", &A, &B);

    int i = 0;
    while (1)
    {
        if (A[i] == '\0' && B[i] == '\0')
        {
            printf("%s", A);
            break;
        }
        else if (A[i] == '\0')
        {
            printf("%s", A);
            break;
        }
        else if (B[i] == '\0')
        {
            printf("%s", B);
            break;
        }
        else if (A[i] < B[i])
        {
            printf("%s", A);
            break;
        }
        else if (B[i] < A[i])
        {
            printf("%s", B);
            break;
        }
        else if (B[i] == A[i])
        {
            i++;
        }
    }
    return 0;
}
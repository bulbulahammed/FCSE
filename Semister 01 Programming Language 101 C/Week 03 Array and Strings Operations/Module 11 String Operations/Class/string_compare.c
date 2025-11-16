#include <stdio.h>

int main()
{
    char A[101], B[101];
    scanf("%s%s", &A, &B);
    int i = 0;
    while (1)
    {
        if (A[i] == '\0' && B[i] == '\0')
        {
            printf("A and B are equal.");
            break;
        }
        else if (A[i] == '\0')
        {
            printf("A is smaller.");
            break;
        }
        else if (B[i] == '\0')
        {
            printf("B is smaller.");
            break;
        }
        else if (A[i] < B[i])
        {
            printf("A is smaller.");
            break;
        }
        else if (B[i] < A[i])
        {
            printf("B is smaller.");
            break;
        }
        else if (A[i] == B[i])
        {
            i++;
        }
    }
    return 0;
}
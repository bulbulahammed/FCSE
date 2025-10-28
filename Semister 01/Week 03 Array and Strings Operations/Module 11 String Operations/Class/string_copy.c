#include <stdio.h>
#include <string.h>

int main()
{
    char A[101], B[101];
    scanf("%s %s", &A, &B);
    int length = strlen(B);
    for (int i = 0; i <= length; i++)
    {
        A[i] = B[i];
    }
    printf("%s %s", A, B);
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char A[101], B[101];
    scanf("%s %s", &A, &B);
    strcpy(A, B);
    printf("%s %s", A, B);
    return 0;
}
#include <stdio.h>

int main()
{
    char A[101], B[101];
    scanf("%s%s", &A, &B);
    strcat(A, B); // A is concat with B;
    printf("%s %s", A, B);
    return 0;
}
#include <stdio.h>

int Result;

int summation(int A, int B)
{
    Result = A + B;
    return Result;
}

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    summation(A, B);
    int Addition = Result;
    printf("%d", Addition);
    return 0;
}
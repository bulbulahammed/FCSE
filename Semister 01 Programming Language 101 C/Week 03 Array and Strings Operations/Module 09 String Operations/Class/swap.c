#include <stdio.h>

int main()
{
    // int A, B;
    // scanf("%d %d", &A, &B);
    int A = 10;
    int B = 20;
    int tmp = A;
    A = B;
    B = tmp;
    printf("A = %d\nB = %d", A, B);
    return 0;
}
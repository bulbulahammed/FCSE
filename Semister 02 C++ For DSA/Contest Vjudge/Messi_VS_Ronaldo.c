#include <stdio.h>

int main()
{
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);
    int MessiPoints = (A * 2) + (B * 1);
    int RonaldoPoints = (X * 2) + (Y * 1);
    if (MessiPoints > RonaldoPoints)
    {
        printf("Messi");
    }
    else if (MessiPoints < RonaldoPoints)
    {
        printf("Ronaldo");
    }
    else if (MessiPoints == RonaldoPoints)
    {
        printf("Equal");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    long long X, Y;
    if (scanf("%lld %lld", &X, &Y) != 2)
        return 0;
    long long summation = X + Y;
    long long multiplication = X * Y;
    long long subtraction = X - Y;
    printf("%lld + %lld = %lld\n", X, Y, summation);
    printf("%lld * %lld = %lld\n", X, Y, multiplication);
    printf("%lld - %lld = %lld\n", X, Y, subtraction);
    return 0;
}


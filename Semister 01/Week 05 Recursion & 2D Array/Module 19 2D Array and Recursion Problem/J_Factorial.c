#include <stdio.h>

long long int factorial(N)
{
    if (N == 1)
    {
        return 1;
    }
    long long int toMultiple = factorial(N - 1);
    return toMultiple * N;
}

int main()
{
    int N;
    scanf("%d", &N);
    long long int result = factorial(N);
    printf("%lld", result);
    return 0;
}
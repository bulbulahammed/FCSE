#include <stdio.h>

void summation(int num1, int num2)
{
    int result = num1 + num2;
    printf("%d", result);
}

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    summation(num1, num2);

    return 0;
}
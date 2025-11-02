#include <stdio.h>

void summation()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    int result = num1 + num2;
    printf("%d", result);
}

int main()
{
    summation();

    return 0;
}
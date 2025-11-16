#include <stdio.h>

int summation()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    int result = num1 + num2;
    return result;
}

int main()
{
    int sum_result = summation();
    printf("%d", sum_result);
    return 0;
}
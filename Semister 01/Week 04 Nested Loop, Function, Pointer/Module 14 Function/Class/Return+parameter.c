#include <stdio.h>

int summation(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

int main()
{
    int sum_result = summation(10, 12);
    printf("%d", sum_result);
    return 0;
}
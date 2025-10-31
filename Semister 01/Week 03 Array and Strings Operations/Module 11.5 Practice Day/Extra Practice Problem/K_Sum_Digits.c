#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    char myArray[N + 1];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", &myArray);
    }
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + myArray[i] - '0';
    }
    printf("%d\n", sum);
    return 0;
}
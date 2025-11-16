#include <stdio.h>

int main()
{
    char charString[1000001];
    scanf("%s", charString);
    int length = strlen(charString);

    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        // sum = sum + charString[i] - 48;
        // sum = (sum + charString[i]) - '0';
        sum += charString[i] - '0';
    }
    printf("%d", sum);

    return 0;
}
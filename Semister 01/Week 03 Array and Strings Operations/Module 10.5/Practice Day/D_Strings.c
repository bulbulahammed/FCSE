#include <stdio.h>

int main()
{
    char firstString[11];
    scanf("%s", &firstString);
    int firstLength = 0;
    for (int i = 0; firstString[i] != '\0'; i++)
    {
        firstLength++;
    }
    char secondString[11];
    scanf("%s", &secondString);
    int secondLength = 0;
    for (int i = 0; secondString[i] != '\0'; i++)
    {
        secondLength++;
    }
    printf("%d %d\n", firstLength, secondLength);
    printf("%s%s\n", firstString, secondString);
    char tmp;

    tmp = firstString[0];
    firstString[0] = secondString[0];
    secondString[0] = tmp;
    printf("%s %s", firstString, secondString);

    return 0;
}
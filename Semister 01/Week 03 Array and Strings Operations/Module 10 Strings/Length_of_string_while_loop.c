#include <stdio.h>

int main()
{
    char charName[150];
    scanf("%s", charName);
    int i = 0;
    int count = 0;
    while (charName[i] != '\0')
    {
        count = i + 1;
        i++;
    }
    printf("%d", count);
    return 0;
}
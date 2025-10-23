#include <stdio.h>

int main()
{
    char charName[102];
    scanf("%s", charName);
    int i = 0;
    int count = 0;
    do
    {
        count = i + 1;
        i++;
    } while (charName[i] != '\0');
    printf("%d", count);
    return 0;
}
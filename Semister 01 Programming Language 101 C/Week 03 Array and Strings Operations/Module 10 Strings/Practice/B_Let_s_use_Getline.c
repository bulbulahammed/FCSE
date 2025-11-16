#include <stdio.h>

int main()
{
    char stringName[1000001];
    fgets(stringName, 1000001, stdin);
    for (int i = 0; stringName[i] != '\\'; i++)
    {
        printf("%c", stringName[i]);
    }
    return 0;
}
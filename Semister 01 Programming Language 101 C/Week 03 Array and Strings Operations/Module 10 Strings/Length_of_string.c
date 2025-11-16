#include <stdio.h>

int main()
{
    char name[100];
    scanf("%s", name);
    printf("%s\n", name);
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count = i + 1;
        // count++
    }
    printf("%d", count);
    return 0;
}
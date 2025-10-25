#include <stdio.h>

int main()
{
    char String1[1001];
    scanf("%s", &String1);
    char String2[1001];
    scanf("%s", &String2);

    // First String Length
    int length1 = 0;
    for (int i = 0; String1[i] != '\0'; i++)
    {
        length1++;
    }
    // Second String Length
    int length2 = 0;
    for (int i = 0; String2[i] != '\0'; i++)
    {
        length2++;
    }
    printf("%d %d\n", length1, length2);
    printf("%s %s", String1, String2);
    return 0;
}
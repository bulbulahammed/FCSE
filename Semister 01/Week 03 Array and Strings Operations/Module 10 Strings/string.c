#include <stdio.h>

int main()
{
    char name[20];
    scanf("%s", name);
    printf("%s\n", name);
    // Character Array Keep a Null character after finish the array.
    // Print the Null '\0' Character.
    printf("%c\n", name[7]);
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c ", name[i]);
    }
    return 0;
}
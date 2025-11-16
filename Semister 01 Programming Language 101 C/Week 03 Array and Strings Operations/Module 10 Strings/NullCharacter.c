#include <stdio.h>

int main()
{
    char name[20];
    scanf("%s", name);
    // Print the full string or Character Array;
    printf("%s\n", name);
    /* Print the null '\0' character, Null will be found where character array finish on that index.*/
    printf("%c\n", name[7]);
    // Print the ASCII Value of Null; ASCII Value of Null is 0;
    printf("%d", name[7]);
    return 0;
}
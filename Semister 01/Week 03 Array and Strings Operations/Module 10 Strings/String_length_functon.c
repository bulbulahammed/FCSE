#include <stdio.h>
#include <string.h>

int main()
{
    char charArray[102];
    scanf("%s", charArray);
    int length = strlen(charArray);
    printf("%d", length);
    return 0;
}
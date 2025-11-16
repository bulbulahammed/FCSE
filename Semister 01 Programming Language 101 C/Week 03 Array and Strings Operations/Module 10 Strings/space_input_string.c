#include <stdio.h>
#include <string.h>
int main()
{
    char Name[50];
    /* scan input using fgets(char string name,size + 1 for null char .\0.,standard input)*/
    fgets(Name, 15, stdin);
    printf("%s", Name);
    return 0;
}
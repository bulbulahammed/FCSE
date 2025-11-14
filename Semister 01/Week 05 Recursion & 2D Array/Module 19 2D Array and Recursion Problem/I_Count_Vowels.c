#include <stdio.h>

int rec(char myString[], int i)
{

    if (myString[i] == '\0')
    {
        return 0;
    }
    int count = rec(myString, i + 1);
    if (myString[i] == 'a' || myString[i] == 'e' || myString[i] == 'i' || myString[i] == 'o' || myString[i] == 'u' || myString[i] == 'A' || myString[i] == 'E' || myString[i] == 'I' || myString[i] == 'O' || myString[i] == 'U'

    )
    {
        return count + 1;
    }
    else
    {

        return count;
    }
}

int main()
{
    char myString[201];
    fgets(myString, 201, stdin);
    int result = rec(myString, 0);
    printf("%d", result);
    return 0;
}
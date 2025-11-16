#include <stdio.h>

int main()
{
    char myString[100001];
    fgets(myString, 100001, stdin);
    for (int i = 0; myString[i] != '\0'; i++)
    {
        if (myString[i] == ',')
        {
            myString[i] = ' ';
        }
        if (myString[i] >= 65 && myString[i] <= 90)
        {
            myString[i] = myString[i] + 32;
        }
        else if (myString[i] >= 97 && myString[i] <= 122)
        {
            myString[i] = myString[i] - 32;
        }
    }

    printf("%s", myString);
    return 0;
}
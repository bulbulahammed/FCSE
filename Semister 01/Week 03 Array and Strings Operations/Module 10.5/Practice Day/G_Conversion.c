#include <stdio.h>

int main()
{
    char myStrings[100001];
    fgets(myStrings, 1000001, stdin);
    for (int i = 0; myStrings[i] != '\n'; i++)
    {
        if (myStrings[i] == ',')
        {
            myStrings[i] = ' ';
        }
        if (myStrings[i] >= 'A' && myStrings[i] <= 'Z')
        {
            myStrings[i] = myStrings[i] + 32;
        }
        else if (myStrings[i] >= 'a' && myStrings[i] <= 'z')
        {
            myStrings[i] = myStrings[i] - 32;
        }
    }
    printf("%s", myStrings);
    return 0;
}
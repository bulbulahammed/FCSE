#include <stdio.h>
#include <string.h>

int main()
{
    char myString[100001];
    scanf("%s", myString);
    // printf("%s", myString);
    int length = strlen(myString);
    int consonant = 0;
    for (int i = 0; i < length; i++)
    {
        if (myString[i] != 'a' && myString[i] != 'e' && myString[i] != 'i' && myString[i] != 'o' && myString[i] != 'u')
        {
            consonant++;
        }
    }
    printf("%d", consonant);
    return 0;
}
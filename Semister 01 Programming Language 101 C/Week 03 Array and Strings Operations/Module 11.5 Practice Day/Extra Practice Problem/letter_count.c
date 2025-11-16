#include <stdio.h>
#include <string.h>

int main()
{
    char myArray[1000001];
    scanf("%s", myArray);

    int length = strlen(myArray);
    int freq[26] = {0};
    for (int i = 0; i < length; i++)
    {
        freq[myArray[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c : %d\n", 'a' + i, freq[i]);
        }
    }
    return 0;
}
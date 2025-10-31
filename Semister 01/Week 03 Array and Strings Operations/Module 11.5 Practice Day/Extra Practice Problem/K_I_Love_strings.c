#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    char firstChar[51], secondChar[51];
    for (int t = 0; t < T; t++)
    {
        scanf("%s %s", firstChar, secondChar);
        char result[105];
        int i = 0, j = 0, k = 0;

        while (firstChar[i] != '\0' && secondChar[j] != '\0')
        {
            result[k++] = firstChar[i++];
            result[k++] = secondChar[j++];
        }

        if (firstChar[i] == '\0' && secondChar[i] != '\0')
        {
            result[k++] = secondChar[j++];
        }
        else if (firstChar[i] != '\0' && secondChar[i] == '\0')
        {
            result[k++] = firstChar[i++];
        }

        result[k] = '\0';
        printf("%s\n", result);
    }

    return 0;
}
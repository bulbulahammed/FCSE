#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    char myChar[101];
    for (int i = 0; i < T; i++)
    {
        scanf("%s", myChar);
        int length = strlen(myChar);
        if (length > 10)
        {
            printf("%c%d%c\n", myChar[0], length - 2, myChar[length - 1]);
        }
        else
        {
            printf("%s\n", myChar);
        }
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    char myString[10001];
    for (int i = 0; i < T; i++)
    {
        scanf("%s", myString);
        int length = strlen(myString);
        int capitalCount = 0;
        int smallCount = 0;
        int digitCount = 0;
        for (int i = 0; i < length; i++)
        {
            if (myString[i] >= 'A' && myString[i] <= 'Z')
            {
                capitalCount++;
            }
            if (myString[i] >= 'a' && myString[i] <= 'z')
            {
                smallCount++;
            }
            if (myString[i] >= '0' && myString[i] <= '9')
            {
                digitCount++;
            }
        }
        printf("%d %d %d\n", capitalCount, smallCount, digitCount);
    }
    return 0;
}
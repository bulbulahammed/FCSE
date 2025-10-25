#include <stdio.h>

int main()
{
    char myString[1001];
    scanf("%s", &myString);
    int len = 0;
    while (myString[len] != '\0')
    {
        len++;
    }
    int I = 0;
    int J = len - 1;
    while (I < J)
    {
        if (myString[I] != myString[J])
        {
            printf("NO");
            return 0;
        }
        I++;
        J--;
    }
    printf("YES");
    return 0;
}
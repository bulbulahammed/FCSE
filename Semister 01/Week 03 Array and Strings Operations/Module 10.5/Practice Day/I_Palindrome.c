#include <stdio.h>

int main()
{
    char myString[1001];
    scanf("%s", &myString);
    int length = 0;
    for (int i = 0; myString[i] != '\0'; i++)
    {
        length++;
    }
    int I = 0;
    int J = length - 1;
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
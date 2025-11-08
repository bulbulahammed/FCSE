#include <stdio.h>

int is_palindrome(char str[])
{

    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    int I = 0;
    int J = len - 1;
    while (I < J)
    {
        if (str[I] != str[J])
        {
            return 0;
        }
        I++;
        J--;
    }
    return 1;
}

int main()
{
    char S[1001];
    scanf("%s", S);
    int result = is_palindrome(S);
    if (result == 1)
    {
        printf("Palindrome");
    }
    if (result == 0)
    {
        printf("Not Palindrome");
    }
    return 0;
}
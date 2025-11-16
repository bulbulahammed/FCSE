#include <stdio.h>
#include <string.h>

int main()
{
    char A[101], B[101];
    scanf("%s%s", &A, &B);
    printf("%s %s\n", A, B);
    int length_A = 0;
    int length_B = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        length_A++;
    }
    for (int i = 0; B[i] != '\0'; i++)
    {
        length_B++;
    }
    for (int i = 0; i <= length_B; i++)
    {
        A[i + length_A] = B[i];
    }
    printf("%s %s", A, B);
    return 0;
}
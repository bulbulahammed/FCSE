#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int myDigits[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &myDigits[i]);
    }
    int dividedByTwo = 0;
    int dividedByThree = 0;
    for (int i = 0; i < N; i++)
    {
        if (myDigits[i] % 2 == 0)
        {
            dividedByTwo++;
        }
        else if (myDigits[i] % 2 == 0 && myDigits[i] % 3 == 0)
        {
            dividedByTwo++;
        }
        else if (myDigits[i] % 3 == 0)
        {
            dividedByThree++;
        }
    }
    printf("%d %d", dividedByTwo, dividedByThree);
    return 0;
}
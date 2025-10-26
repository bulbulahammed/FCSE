#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int myArray[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &myArray[i]);
    }
    int I;
    int J;
    int tmp;
    for (I = 0, J = N - 1; I < J; I++, J--)
    {
        tmp = myArray[I];
        myArray[I] = myArray[J];
        myArray[J] = tmp;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", myArray[i]);
    }
    return 0;
}
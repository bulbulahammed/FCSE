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
    int I = 0;
    int J = N - 1;
    int tmp;
    while (I < J)
    {
        tmp = myArray[I];
        myArray[I] = myArray[J];
        myArray[J] = tmp;
        I++;
        J--;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", myArray[i]);
    }
    return 0;
}
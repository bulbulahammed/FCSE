#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int myString[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &myString[i]);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            if (myString[i] > myString[j])
            {
                int tmp = myString[i];
                myString[i] = myString[j];
                myString[j] = tmp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", myString[i]);
    }
    return 0;
}
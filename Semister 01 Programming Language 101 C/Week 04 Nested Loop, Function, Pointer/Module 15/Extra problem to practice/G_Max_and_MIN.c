#include <stdio.h>

void maxMin(int N)
{
    int myArray[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &myArray[i]);
    }
    int min = myArray[0];
    int max = myArray[0];
    for (int i = 0; i < N; i++)
    {

        if (myArray[i] < min)
        {
            min = myArray[i];
        }
        if (myArray[i] > max)
        {
            max = myArray[i];
        }
    }
    printf("%d %d", min, max);
}

int main()
{
    int N;
    scanf("%d", &N);
    maxMin(N);
    return 0;
}
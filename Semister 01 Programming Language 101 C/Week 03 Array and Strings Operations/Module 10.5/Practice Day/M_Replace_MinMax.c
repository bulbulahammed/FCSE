#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int Arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Arr[i]);
    }

    int minIndex = 0;
    int minimum = 0;
    minimum = Arr[0];
    for (int i = 0; i < N; i++)
        if (Arr[i] < minimum)
        {
            minimum = Arr[i];
            minIndex = i;
        }

    int maxIndex = 0;
    int maximum;
    maximum = Arr[0];
    for (int i = 0; i < N; i++)
        if (Arr[i] > maximum)
        {
            maximum = Arr[i];
            maxIndex = i;
        }

    int tmp;
    tmp = Arr[minIndex];
    Arr[minIndex] = Arr[maxIndex];
    Arr[maxIndex] = tmp;

    for (int i = 0; i < N; i++)
    {
        printf("%d ", Arr[i]);
    }

    return 0;
}
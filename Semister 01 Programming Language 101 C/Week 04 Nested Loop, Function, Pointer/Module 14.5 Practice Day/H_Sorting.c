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
    int tmp;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (myArray[i] > myArray[j])
            {
                tmp = myArray[i];
                myArray[i] = myArray[j];
                myArray[j] = tmp;
            }
        }
        printf("%d ", myArray[i]);
    }
    return 0;
}
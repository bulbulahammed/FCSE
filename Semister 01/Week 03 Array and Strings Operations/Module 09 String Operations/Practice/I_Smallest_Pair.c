#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    int N;
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        int Arr[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &Arr[i]);
        };
        int smallestPair = 1000000000;
        int CurrentSum;
        int i = 0;
        int j = N - 1;
        for (i = 0; i < N - 1; i++)
        {
            CurrentSum = Arr[i] + Arr[j] + (j - i);
            if (CurrentSum < smallestPair)
            {
                smallestPair = CurrentSum;
            }
            for (int j = N - 1; j > i; j--)
            {
                CurrentSum = Arr[i] + Arr[j] + (j - i);
                if (CurrentSum < smallestPair)
                {
                    smallestPair = CurrentSum;
                }
            }
        }

        printf("%d\n", smallestPair);
    };
    return 0;
}
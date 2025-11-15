#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);

        int myArrayA[N];
        int myArrayB[N];
        int myArrayC[N];
        // Input Array element
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &myArrayA[j]);
        }
        // Copy Array
        for (int j = 0; j < N; j++)
        {
            myArrayB[j] = myArrayA[j];
        }
        // Ascending
        for (int j = 0; j < N - 1; j++)
        {
            for (int k = 0; k < N - j - 1; k++)
            {
                if (myArrayB[k] > myArrayB[k + 1])
                {
                    int temp = myArrayB[k];
                    myArrayB[k] = myArrayB[k + 1];
                    myArrayB[k + 1] = temp;
                }
            }
        }
        for (int j = 0; j < N; j++)
        {
            myArrayC[j] = abs(myArrayA[j] - myArrayB[j]);
            printf("%d ", myArrayC[j]);
        }
        printf("\n");
    }

    return 0;
}

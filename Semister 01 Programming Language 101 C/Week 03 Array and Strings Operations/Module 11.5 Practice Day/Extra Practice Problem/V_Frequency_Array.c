#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d%d", &N, &M);
    int myArray[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &myArray[i]);
    }
    int freq[100001] = {0};
    // int freq[M];
    // for (int i = 0; i < M; i++)
    // {
    //     freq[i] = 0;
    // }

    for (int i = 0; i < N; i++)
    {
        int val = myArray[i];
        freq[val - 1]++;
    }
    for (int i = 0; i < M; i++)
    {
        printf("%d\n", freq[i]);
    }
    return 0;
}
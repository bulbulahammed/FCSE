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
    int freq[10] = {0};
    for (int i = 0; i < N; i++)
    {
        int val = myArray[i];
        freq[val]++;
        // freq[myArray[i]]++;
    }
    for (int i = 0; i <= 9; i++)
    {
        printf("Frequency of %d --> %d\n", i, freq[i]);
    }
}
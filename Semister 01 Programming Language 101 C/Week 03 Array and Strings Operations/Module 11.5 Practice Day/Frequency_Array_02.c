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
        if (myArray[i] == 0)
        {
            freq[0]++;
        }
        else if (myArray[i] == 1)
        {
            freq[1]++;
        }
        else if (myArray[i] == 2)
        {
            freq[2]++;
        }
        else if (myArray[i] == 3)
        {
            freq[3]++;
        }
        else if (myArray[i] == 4)
        {
            freq[4]++;
        }
        else if (myArray[i] == 5)
        {
            freq[5]++;
        }
        else if (myArray[i] == 6)
        {
            freq[6]++;
        }
        else if (myArray[i] == 7)
        {
            freq[7]++;
        }
        else if (myArray[i] == 8)
        {
            freq[8]++;
        }
        else if (myArray[i] == 9)
        {
            freq[9]++;
        }
    }
    printf("Frequency of 0 --> %d\nFrequency of 1 --> %d\nFrequency of 2 --> %d\nFrequency of 2 --> %d\nFrequency of 4 --> %d\nFrequency of 5 --> %d\nFrequency of 6 --> %d\nFrequency of 7 --> %d\nFrequency of 8 --> %d\nFrequency of 9 --> %d\n", freq[0], freq[1], freq[2], freq[3], freq[4], freq[5], freq[6], freq[7], freq[8], freq[9]);
    return 0;
}
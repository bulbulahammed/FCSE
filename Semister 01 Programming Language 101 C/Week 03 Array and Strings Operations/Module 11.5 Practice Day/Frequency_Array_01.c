#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int myArr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &myArr[i]);
    }
    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 7, count8 = 0, count9 = 0;
    for (int i = 0; i < N; i++)
    {
        if (myArr[i] == 0)
        {
            count0++;
        }
        if (myArr[i] == 1)
        {
            count1++;
        }
        if (myArr[i] == 2)
        {
            count2++;
        }
        if (myArr[i] == 3)
        {
            count3++;
        }
        if (myArr[i] == 4)
        {
            count4++;
        }
        if (myArr[i] == 5)
        {
            count5++;
        }
        if (myArr[i] == 6)
        {
            count6++;
        }
        if (myArr[i] == 7)
        {
            count7++;
        }
        if (myArr[i] == 8)
        {
            count8++;
        }
        if (myArr[i] == 9)
        {
            count9++;
        }
    }
    printf("Frequency of 0 --> %d\nFrequency of 1 --> %d\nFrequency of 2 --> %d\nFrequency of 2 --> %d\nFrequency of 4 --> %d\nFrequency of 5 --> %d\nFrequency of 6 --> %d\nFrequency of 7 --> %d\nFrequency of 8 --> %d\nFrequency of 9 --> %d\n", count0, count1, count2, count3, count4, count5, count6, count7, count8, count9);

    return 0;
}
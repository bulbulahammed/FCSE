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
    int I = 0;
    int J = N - 1;
    while (I < J)
    {
        if (myArray[I] != myArray[J])
        {
            printf("NO");
            return 0;
        }
        I++;
        J--;
    }
    printf("YES");
    return 0;
}
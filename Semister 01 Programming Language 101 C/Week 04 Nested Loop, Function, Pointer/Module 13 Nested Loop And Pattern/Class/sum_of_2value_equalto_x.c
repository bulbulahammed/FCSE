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
    int X;
    int flag = 0;
    scanf("%d", &X);
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            // printf("%d %d\n", myArray[i], myArray[j]);
            if (myArray[i] + myArray[j] == X)
            {
                flag = 1;
                printf("Yes\n");
            }
        }
    }
    if (flag == 0)
    {
        printf("No");
    }
    return 0;
}
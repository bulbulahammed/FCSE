#include <stdio.h>

void print_array(int myArray[], int N, int i)
{
    if (i == N)
    {
        return;
    }
    printf("%d\n", myArray[i]);
    print_array(myArray, N, i + 1);
}

int main()
{
    int N;
    scanf("%d", &N);
    int myArray[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &myArray[i]);
    }

    print_array(myArray, N, 0);
    return 0;
}
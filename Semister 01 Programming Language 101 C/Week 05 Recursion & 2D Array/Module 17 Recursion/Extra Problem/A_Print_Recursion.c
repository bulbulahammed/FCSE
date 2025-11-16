#include <stdio.h>

void print_I_love(int N, int i)
{
    if (i == N)
    {
        return;
    }
    printf("I love Recursion\n");
    print_I_love(N, i + 1);
}

int main()
{
    int N;
    scanf("%d", &N);
    int i;
    print_I_love(N, i);
    return 0;
}
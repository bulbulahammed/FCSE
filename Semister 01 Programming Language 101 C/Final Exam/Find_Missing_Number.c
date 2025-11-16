#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    long long M, A, B, C;
    for (int i = 0; i < T; i++)
    {
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
        long long mulThreeNumber = A * B * C;
        if (mulThreeNumber == 0)
        {
            if (M == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
            continue;
        }
        if (M % mulThreeNumber != 0)
        {
            printf("-1\n");
            continue;
        }
        long long missingNumber = M / mulThreeNumber;
        printf("%lld\n", missingNumber);
    }

    return 0;
}

/*

Sample input:
4
20 1 2 2
10 2 2 1
1 1 2 3
0 3 10 15



*/
// #include <stdio.h>

// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int hashDash = 1;
//     int space = N - 1;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= hashDash; j++)
//         {
//             if (i % 2 == 0)
//             {
//                 printf("#");
//             }
//             else
//             {
//                 printf("-");
//             }
//         }
//         printf("\n");
//         space--;
//         hashDash = hashDash + 2;
//     }

//     int hashDash2 = 2 * N - 3;
//     int space2 = 1;
//     for (int i = 0; i < N - 1; i++)
//     {
//         for (int j = 1; j <= space2; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= hashDash2; j++)
//         {
//             if (i % 2 == 0)
//             {
//                 printf("#");
//             }
//             else
//             {
//                 printf("-");
//             }
//         }
//         printf("\n");
//         space2++;
//         hashDash2 = hashDash2 - 2;
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int hashDash = 1;
    int space = N - 1;

    // First half
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= hashDash; j++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        space--;
        hashDash += 2;
    }

    int hashDash2 = 2 * N - 3;
    int space2 = 1;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 1; j <= space2; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= hashDash2; j++)
        {
            if ((hashDash2 - 1) % 4 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        printf("\n");
        space2++;
        hashDash2 -= 2;
    }

    return 0;
}

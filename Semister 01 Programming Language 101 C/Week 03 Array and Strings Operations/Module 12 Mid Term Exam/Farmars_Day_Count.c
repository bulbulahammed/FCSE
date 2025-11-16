#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    int existFarmer, newFarmer, previousTime;

    for (int i = 0; i < T; i++)
    {
        scanf("%d%d%d", &existFarmer, &newFarmer, &previousTime);
        int TotalFarmer = existFarmer + newFarmer;
        int newTime = (existFarmer * previousTime) / (TotalFarmer);
        int fewerTime = previousTime - newTime;
        printf("%d\n", fewerTime);
    }

    return 0;
}
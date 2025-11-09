#include <stdio.h>

void jellyBean()
{
    printf("jellyBean \n");
}

void blackBerry()
{
    printf("blackBerry \n");
    jellyBean();
}

void android()
{
    printf("android\n");
    blackBerry();
}

int main()
{
    printf("main\n");
    android();
    return 0;
}
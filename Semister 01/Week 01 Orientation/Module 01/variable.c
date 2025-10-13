#include<stdio.h>

int main()
{
    int age;
    float weight;
    char charName;

    scanf("%d %f %c", &age, &weight,&charName);
    printf("%d\n%f\n%c", age, weight, charName);
    return 0;
}
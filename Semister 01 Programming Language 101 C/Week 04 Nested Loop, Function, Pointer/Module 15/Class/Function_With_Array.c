#include <stdio.h>

void fun(int myArray[], int N)
{
    myArray[1] = 200;                           // Main function will be change, because array pass by reference and variable pass by value.
    printf("Address from fun: %p,\n", myArray); // Print address to check if it is same from main and fun function.

    // As we have array and it's size in argument, now we can print the whole array
    printf("Array in fun function:  \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", myArray[i]);
    }
    printf("\n");
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
    printf("Address from fun: %p,\n", myArray);
    fun(myArray, N);

    printf("Array in main function:  \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", myArray[i]);
    }
    return 0;
}
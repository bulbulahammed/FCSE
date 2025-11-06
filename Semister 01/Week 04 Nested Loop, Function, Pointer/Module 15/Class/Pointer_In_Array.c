#include <stdio.h>
// Array er 0th index er Addrress Array name e thake.
int main()
{
    int myArray[5] = {10, 20, 30, 40, 50};
    printf("Address of 0th index: %p\n", &myArray[0]);
    // Array name work as pointer, Array name hold 0th index's Address
    printf("Array Name as pointer: %p\n", myArray);
    // It will print value of 0th index of Array as it Dereference.
    printf("After Dereference: %d\n", *myArray);

    // Reassign value of 0th index by dereference
    *myArray = 100;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", myArray[i]);
    }

    printf("\n");

    // Reassign value of 2nd index by dereference
    *(myArray + 1) = 200;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", myArray[i]);
    }

    return 0;
}
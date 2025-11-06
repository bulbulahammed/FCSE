#include <stdio.h>

// x in main function and fun function are different
// Only Value of x pass from main to fun not the address
// That why it is called passed by value
void fun(int x)
{
    x = 20;
    // printf("%d\n", x); print: 20
    printf("x Address fun function: %p\n", &x);
}

int main()
{

    int x = 10;
    fun(x);
    // printf("%d\n", x); print : 10
    printf("x Address main function: %p\n", &x);
    return 0;
}
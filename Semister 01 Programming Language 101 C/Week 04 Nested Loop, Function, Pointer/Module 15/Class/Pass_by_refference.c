#include <stdio.h>

void fun(int *pntr) // Receive address of x
{
    *pntr = 20; // change the value of address of x
}

int main()
{

    int x = 10;
    fun(&x);           // Sent address of x
    printf("%d\n", x); // Print: 20
    return 0;
}
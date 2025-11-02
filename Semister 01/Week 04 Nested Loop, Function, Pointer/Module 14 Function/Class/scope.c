#include <stdio.h>

// Global Variable
int globalDigit = 2025;

int sum()
{
    int x = 200;
    printf("Sum -> %d\n", x);
    printf("Global from sum -> %d\n", globalDigit);
}
int main()
{
    int x = 10;
    printf("Main -> %d\n", x);
    printf("Global from Main -> %d\n", globalDigit);
    sum();
    return 0;
}
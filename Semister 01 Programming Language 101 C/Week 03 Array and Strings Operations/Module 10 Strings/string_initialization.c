#include <stdio.h>

int main()
{
    // Manually Initialization
    // char name[7] = {'B', 'U', 'L', 'B', 'U', 'L', '\0'};
    // If use more size in array don't need to write null char.
    char FirstName[7] = {'B', 'U', 'L', 'B', 'U', 'L'};
    printf("%s ", FirstName);
    // Initialization using string super power.
    char LastName[10] = "AHAMMED";
    printf("%s", LastName);
    return 0;
}
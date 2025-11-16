#include <stdio.h>

int main()
{
    int x = 10;
    printf("%d\n", x);  // Print value of x
    printf("%p\n", &x); // Print Address of x

    int *ptr;            // Declare Pointer variable.
    ptr = &x;            // Assign Address of x to ptr
    printf("%p\n", ptr); // Print ptr
    // Address of pointer Variable
    // যেকোন ভ্যারিয়েবলই মেমোরীতে জায়গা দখল করে, মানে তার নিজের এড্রেস আছে।
    printf("%p\n", &ptr); // Print Address of ptr
    // Change value according to Address
    *ptr = 100; // Value of x change to 100 from 10
    printf("%d", x);
    return 0;
}
#include <stdio.h>

int main()
{
    int x = 10;
    int y = 20;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%p\n", &x);
    printf("%p\n", &y);

    int *ptr;
    int *ptr2;
    ptr = &x;
    ptr2 = &y;
    printf("%p\n", ptr);
    printf("%p\n", ptr2);
    // Address of pointer Variable
    // যেকোন ভ্যারিয়েবলই মেমোরীতে জায়গা দখল করে, মানে তার নিজের এড্রেস আছে।
    printf("%p\n", &ptr);
    printf("%p\n", &ptr2);
    return 0;
}
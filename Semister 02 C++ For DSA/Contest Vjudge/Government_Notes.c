#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int CollectedNotes = N * 2000;
    int Needed = CollectedNotes / 500;
    printf("%d", Needed);
    return 0;
}
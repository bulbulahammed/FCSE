

#include<stdio.h>

int main(){

    int N;
    scanf("%d", &N);
    int a = N/10;
    int b = N%10;
    if(b != 0 && a % b == 0) {
        printf("YES");
    } else if(a != 0 && b % a == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
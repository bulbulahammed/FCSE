/*Given a number N. Print all the divisors of N in ascending order.

Input
Only one line containing a number N (1 ≤ N ≤ 104).

Output
Print all positive divisors of N, one number per line.
*/



#include<stdio.h>

int main(){

    int N;
    scanf("%d", &N);
    for(int i=1; i<=N;i++){
        if(N%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}


/*
🧠 What happens when you run it
Suppose N = 6.
The loop checks:
1 → 6 ÷ 1 = 6, remainder 0 ✅ → print 1
2 → 6 ÷ 2 = 3, remainder 0 ✅ → print 2
3 → 6 ÷ 3 = 2, remainder 0 ✅ → print 3
4 → 6 ÷ 4 = 1, remainder 2 ❌ → don’t print
5 → 6 ÷ 5 = 1, remainder 1 ❌ → don’t print
6 → 6 ÷ 6 = 1, remainder 0 ✅ → print 6
*/
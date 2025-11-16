//Given N numbers. Count how many of these values are even, odd, positive and negative.
// Input
// First line contains one number N (1 ≤ N ≤ 103) number of values.
// Second line contains N numbers (-105 ≤ Xi ≤ 105).
// Output
// Print four lines with the following format:
// First Line: "Even: X", where X is the number of even numbers in the given input.
// Second Line: "Odd: X", where X is the number of odd numbers in the given input.
// Third Line: "Positive: X", where X is the number of positive numbers in the given input.
// Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

#include<stdio.h>

int main(){

    int n;
    int x;
    int even=0, odd=0, pos=0, neg=0;
    scanf("%d", &n);
    for(int i =1; i <= n; i++){
        scanf("%d", &x);
        if(x%2==0){
            even++;
        }else{
            odd++;
        }
        if(x>0){
            pos++;
        }else if(x<0){
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even,odd,pos,neg);
    return 0;
}
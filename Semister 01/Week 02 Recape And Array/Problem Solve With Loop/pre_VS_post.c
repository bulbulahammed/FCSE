#include<stdio.h>

int main(){

    // post increment
    int x = 10;
    // আগে x এর মান y এ Assign হয়েছে, পরে  x এর সাথে increment হয়েছে।
    int y = x++;
    printf("x = %d\ny =%d\n",x,y);

    int z = y++;
    // এখানে আগে প্রিন্ট হবে, তার পর z এর মান increment হবে।
    printf("Before Increment =%d\n", z++);
    //এখানে আগের প্রিন্ট ফাংশনে Increment হয়ে থাকা মান প্রিন্ট হবে।
    printf("After Increment =%d\n", z);
    // pre increment
    int A = 100;
    // আগে A এর সাথে increment হয়েছে, পরে A এর মান B তে  Assign হয়েছে।
    int B = ++A;
    printf("A = %d\nB = %d", A,B);
    return 0;
}
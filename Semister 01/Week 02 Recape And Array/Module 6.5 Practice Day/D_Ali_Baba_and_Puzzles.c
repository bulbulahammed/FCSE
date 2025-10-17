// D. Ali Baba and Puzzles
// time limit per test1 second
// memory limit per test256 megabytes
// One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4
//  numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×
// ) between the other three numbers; so that each operator is used only once.

// a□b□c=d
// Can you solve this tricky puzzle for him?
// Input
// Only one line containing four numbers a
// , b
// , c
//  and d
//  (−109≤a,b,c≤109
// ),(−1018≤d≤1018
// ).

// Output
// Print "YES" (without quotes) if you get the fourth number using arithmetic operators, otherwise, print "NO" (without quotes).

#include<stdio.h>

int main() {

    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    if (a + b - c == d) {
        printf("YES");
    } else if (a + b * c == d) {
        printf("YES");
    } else if (a - b + c == d) {
        printf("YES");
    } else if (a - b * c == d) {
        printf("YES");
    } else if (a * b + c == d) {
        printf("YES");
    } else if (a * b - c == d) {
        printf("YES");
    } else if (a + (b * c) == d) {
        printf("YES");
    } else if (a - (b * c) == d) {
        printf("YES");
    } else if (a * (b - c) == d) {
        printf("YES");
    } else if (a * (b + c) == d) {
        printf("YES");
    } else if ((a - b) * c == d) {
        printf("YES");
    } else if (b + a * c == d) {
        printf("YES");
    } else if (b * (a - c) == d) {
        printf("YES");
    } else if ((b - a) * c == d) {
        printf("YES");
    } else if ((b - c) + a == d) {
        printf("YES");
    } else if ((b * a) - c == d) {
        printf("YES");
    } else if ((c + a) * b == d) {
        printf("YES");
    } else if ((c - a) * b == d) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}





// Step-by-Step Approach
// Step 1: List the numbers and operators

// Numbers: a, b, c

// Operators: +, -, *

// You need to try all ways to put the operators between numbers.

// Step 2: Consider all orders of numbers (permutations)

// Sometimes changing the order of a, b, c gives a valid solution.

// For 3 numbers, the permutations are:

// a, b, c

// a, c, b

// b, a, c

// b, c, a

// c, a, b

// c, b, a

// ✅ Make sure to check all 6 orders.

// Step 3: Consider all ways to arrange the operators (without repeating)

// You have 3 operators: +, -, *

// Each operator must be used exactly once.

// The possible orderings of operators (permutations) are:

// + - *

// + * -

// - + *

// - * +

// * + -

// * - +

// ✅ Check all 6 operator orders for each number arrangement.

// Step 4: Apply parentheses (2 main patterns)

// With 3 numbers x, y, z and 2 operators op1 and op2, there are 2 meaningful ways to put parentheses:

// (x op1 y) op2 z

// x op1 (y op2 z)

// ✅ You need to evaluate both patterns for each number and operator arrangement.

// Step 5: Calculate each expression

// For each combination:

// Pick a number order (e.g., a, b, c)

// Pick an operator order (e.g., + - *)

// Apply both parentheses patterns: (a + b) - c, a + (b - c)

// Check if the result equals d

// Step 6: Decide output

// If any expression equals d, print YES.

// If none of the combinations work, print NO.

// Step 7: Handle large numbers carefully

// Use a data type that can hold big numbers (long long in C).

// ✅ Summary

// Permute numbers (a, b, c) → 6 ways

// Permute operators (+ - *) → 6 ways

// Apply parentheses (x op1 y) op2 z and x op1 (y op2 z) → 2 ways

// Evaluate each expression → 6 × 6 × 2 = 72 checks

// Compare to d → print YES if matched, NO otherwise
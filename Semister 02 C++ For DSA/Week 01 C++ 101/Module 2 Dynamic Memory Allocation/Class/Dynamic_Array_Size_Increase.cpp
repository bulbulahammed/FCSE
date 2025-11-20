#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *A = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> A[i];
    }
    int *B = new int[5];

    for (int i = 0; i < 3; i++)
    {
        B[i] = A[i];
    }
    B[3] = 40;
    B[4] = 50;
    delete[] A;
    // Difference Between Static And Dynamic Array is We Can Delete the Array in Dynamic
    for (int i = 0; i < 5; i++)
    {
        cout << B[i] << " ";
    }
    return 0;
}
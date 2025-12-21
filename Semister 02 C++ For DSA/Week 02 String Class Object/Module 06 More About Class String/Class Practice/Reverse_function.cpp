#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    // Reverse
    reverse(A, A + N);
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << endl;
    }
    // We Can reverse String by this same way
    return 0;
}
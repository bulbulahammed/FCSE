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
    reverse(A, A + N);
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << endl;
    }
    // String Revers
    string S = "Hello";
    reverse(S.begin(), S.end());
    cout << S << endl;
    return 0;
}
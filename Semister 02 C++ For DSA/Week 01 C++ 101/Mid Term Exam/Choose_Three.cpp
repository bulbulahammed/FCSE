#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, S;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> S;
        int A[N];
        for (int j = 0; j < N; j++)
        {
            cin >> A[j];
        }
        bool found = false;
        for (int I = 0; I < N; I++)
        {
            for (int J = I + 1; J < N; J++)
            {
                for (int K = J + 1; K < N; K++)
                {
                    if (A[I] + A[J] + A[K] == S)
                    {
                        found = true;
                    }
                }
            }
        }
        if (found == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
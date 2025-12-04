#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string S, X;
        cin >> S >> X;

        int N = S.length();
        int M = X.length();

        string result = "";
        int i = 0;

        while (i < N)
        {
            if (i + M <= N && S.substr(i, M) == X)
            {
                result += '#';
                i += M;
            }
            else
            {
                result += S[i];
                i++;
            }
        }

        cout << result << endl;
    }

    return 0;
}

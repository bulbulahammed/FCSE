#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        string S, T;
        cin >> S >> T;

        string result;
        int min_len = min(S.size(), T.size());

        for (int i = 0; i < min_len; i++)
        {
            result += S[i];
            result += T[i];
        }

        if (S.size() > min_len)
            result += S.substr(min_len);
        else if (T.size() > min_len)
            result += T.substr(min_len);

        cout << result << endl;
    }

    return 0;
}
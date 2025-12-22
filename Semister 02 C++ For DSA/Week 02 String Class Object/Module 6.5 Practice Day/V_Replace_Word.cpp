#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    string result = "";
    int n = S.length();
    int i = 0;

    while (i < n)
    {
        if (i + 4 < n &&
            S[i] == 'E' &&
            S[i + 1] == 'G' &&
            S[i + 2] == 'Y' &&
            S[i + 3] == 'P' &&
            S[i + 4] == 'T')
        {

            result += ' ';
            i += 5;
        }
        else
        {
            result += S[i];
            i++;
        }
    }

    cout << result;
    return 0;
}
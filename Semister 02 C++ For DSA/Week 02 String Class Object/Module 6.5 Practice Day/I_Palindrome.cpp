#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int length = S.length();
    int i = 0;
    int j = length - 1;
    while (i < j)
    {
        if (S[i] != S[j])
        {
            cout << "NO";
            return 0;
        }
        i++;
        j--;
    }
    cout << "YES";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // Traditional for loop

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    // Range based for loop / Shortcut for loop

    for (char c : s)
    {
        cout << c << endl;
    }
    return 0;
}
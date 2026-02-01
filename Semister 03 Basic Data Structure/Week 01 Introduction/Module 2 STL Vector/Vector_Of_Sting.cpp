#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> v(N);
    // Using Range based for loop
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    for (string s : v)
    {
        cout << s << endl;
    }
    return 0;
}
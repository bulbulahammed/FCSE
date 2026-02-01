#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < N; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
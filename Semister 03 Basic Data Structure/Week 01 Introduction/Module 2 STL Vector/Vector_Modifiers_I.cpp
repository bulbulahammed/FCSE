#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> v2;
    // Assign one vector to another
    v2 = v;
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }
    // Range Base for Loop
    for (int x : v2)
    {
        cout << x << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    v.pop_back();
    v.push_back(9);
    v.insert(v.begin() + 2, 100);
    v.erase(v.begin() + 3);
    // for(int i =0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // Range Base For Loop
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}

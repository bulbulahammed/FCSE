#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; initializing type 1
    // vector<int> v(5); initializing type 2
    // vector<int> v(10, 5); // initializing type 3
    // vector<int> v2(v);    // initializing type 4 copy from v
    int A[5] = {1, 2, 3, 4, 5};
    // vector<int> v(A, A + 5); // initializing type 5
    vector<int> v = {1, 2, 3, 4};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int W, P, K;
        cin >> W >> P >> K;
        int wooden_to_buy = min(W, K);
        int plastic_to_buy = K - wooden_to_buy;
        int stylishness = wooden_to_buy * 2 + plastic_to_buy * 1;
        cout << stylishness << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string num;
        cin >> num;
        int first_sum = 0, last_sum = 0;
        for (int j = 0; j < 3; j++)
        {
            first_sum += (num[j] - '0');
        }

        for (int j = 3; j < 6; j++)
        {
            last_sum += (num[j] - '0');
        }

        if (first_sum == last_sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
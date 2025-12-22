#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int count[26] = {0};
        int total = 0;

        for (char c : s)
        {
            int idx = c - 'A';
            if (count[idx] == 0)
            {
                total += 2;
            }
            else
            {
                total += 1;
            }
            count[idx]++;
        }

        cout << total << endl;
    }

    return 0;
}
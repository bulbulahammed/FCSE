#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X;
    cin >> X;
    int lastTwoDigitYear = X % 100;

    string latestPhone;
    if (lastTwoDigitYear < 10)
    {
        latestPhone = "K0" + to_string(lastTwoDigitYear);
    }
    else
    {
        latestPhone = "K" + to_string(lastTwoDigitYear);
    }

    cout << latestPhone;
    return 0;
}
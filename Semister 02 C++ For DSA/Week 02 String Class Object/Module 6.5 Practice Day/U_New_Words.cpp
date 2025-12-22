#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (char &c : s)
    {
        c = tolower(c);
    }

    int freq[26] = {0};

    for (char c : s)
    {
        freq[c - 'a']++;
    }

    string target = "egypt";
    int minCount = 1e9;

    for (char c : target)
    {
        int index = c - 'a';
        minCount = min(minCount, freq[index]);
    }

    cout << minCount << endl;

    return 0;
}
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    unordered_set<long long> found;
    bool duplicate = false;

    for (int i = 0; i < N; i++)
    {
        long long num;
        cin >> num;

        if (found.find(num) != found.end())
        {
            duplicate = true;
        }
        else
        {
            found.insert(num);
        }
    }

    if (duplicate)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
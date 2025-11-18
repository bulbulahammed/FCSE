#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int x = 10;
    int y = 200;
    cout << min({10, 12, 54, 85, 68}) << endl;
    cout << max(a, b) << endl;
    swap(x, y);
    cout << x << " " << y << endl;
    return 0;
}
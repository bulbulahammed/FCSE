#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    string s2 = "Hi";
    // s += s2;
    s.append(s2);
    s.push_back('A');
    cout << s << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;
    int MessiPoints = (A * 2) + (B * 1);
    int RonaldoPoints = (X * 2) + (Y * 1);
    if (MessiPoints > RonaldoPoints)
    {
        cout << "Messi";
    }
    else if (MessiPoints < RonaldoPoints)
    {
        cout << "Ronaldo";
    }
    else if (MessiPoints == RonaldoPoints)
    {
        cout << "Equal";
    }
    return 0;
}
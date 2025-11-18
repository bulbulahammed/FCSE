#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cin.ignore();
    char myString[100];
    cin.getline(myString, 100);
    cout << x << endl
         << myString << endl;
    return 0;
}
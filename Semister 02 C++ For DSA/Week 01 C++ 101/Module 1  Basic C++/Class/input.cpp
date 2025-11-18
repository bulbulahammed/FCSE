#include <iostream>
// std::cin >> x;
using namespace std;
// cin >> x;

int main()
{
    int x;
    char C;
    double D;
    cin >> x >> C >> D;
    cout << "My favorite Number is" << " " << x << " " << C << " " << endl
         << D << endl;
    // Print ASCII Value
    int asciValue = C;
    cout << asciValue << endl;
    // Print ASCII value with type cast;
    cout << (int)C << endl;
    return 0;
}
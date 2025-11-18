#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double d = 25.546895;
    // How many digits after .
    cout << fixed << setprecision(3) << d << endl;
    return 0;
}
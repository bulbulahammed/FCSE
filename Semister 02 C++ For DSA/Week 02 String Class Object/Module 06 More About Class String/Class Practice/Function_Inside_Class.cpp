#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void hello()
    {
        cout << "Hello " << name << endl;
    }
};

int main()
{
    Student sakib("Sakib Ahammed", 23);
    cout << sakib.name << endl;
    sakib.hello();
    Student Rakib("Rakib Ahammed", 20);
    Rakib.hello();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double cg)
    {
        roll = r;
        cls = c;
        gpa = cg;
    }
};
int main()
{
    Student Rahim(45, 5, 4.5);
    Student Karim(10, 5, 5.0);
    cout << Rahim.cls << " " << Rahim.roll << " " << Rahim.gpa << endl;
    cout << Karim.cls << " " << Karim.roll << " " << Karim.gpa << endl;
    return 0;
}
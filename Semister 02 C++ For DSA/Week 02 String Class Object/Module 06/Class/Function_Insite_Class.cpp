#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int math;
    int English;
    Student(string name, int roll, int math, int English)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->English = English;
    }
    void total()
    {
        cout << "Total Marks of" << " " << name << "=" << math + English << endl;
    }
};
int main()
{
    Student Bulbul("Bulbul Ahammed", 23, 85, 92);
    Bulbul.total();
    Student Rakib("Rakib Ahmed", 12, 65, 87);
    Rakib.total();
    return 0;
}
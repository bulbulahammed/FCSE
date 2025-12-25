#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int N;
    cin >> N;
    Student A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i].name >> A[i].roll >> A[i].marks;
    }
    Student minimum;
    minimum.marks = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        if (A[i].marks < minimum.marks)
        {
            minimum = A[i];
        }
    }
    cout << minimum.name << " " << minimum.roll << " " << minimum.marks;
    return 0;
}
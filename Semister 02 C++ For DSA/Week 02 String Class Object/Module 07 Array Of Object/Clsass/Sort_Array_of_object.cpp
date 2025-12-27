#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmpr(Student L, Student R)
{
    if (L.marks < R.marks)
    {
        return true;
    }
    else
    {
        return false;
    }
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
    sort(A, A + N, cmpr);
    for (int i = 0; i < N; i++)
    {
        cout << A[i].name << " " << A[i].roll << " " << A[i].marks << endl;
    }
    return 0;
}
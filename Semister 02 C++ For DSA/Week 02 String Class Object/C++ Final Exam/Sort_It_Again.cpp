#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    long long id;
    int math_marks;
    int eng_marks;

    Student() {}

    void input()
    {
        cin >> name >> cls >> section >> id >> math_marks >> eng_marks;
    }

    void print()
    {
        cout << name << " " << cls << " " << section << " " << id << " "
             << math_marks << " " << eng_marks << endl;
    }
};

bool compare(Student a, Student b)
{
    if (a.eng_marks != b.eng_marks)
        return a.eng_marks > b.eng_marks;
    if (a.math_marks != b.math_marks)
        return a.math_marks > b.math_marks;
    return a.id < b.id;
}

int main()
{
    int N;
    cin >> N;
    Student students[1000];

    for (int i = 0; i < N; i++)
        students[i].input();

    sort(students, students + N, compare);

    for (int i = 0; i < N; i++)
        students[i].print();

    return 0;
}

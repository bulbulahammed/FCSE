#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;

    Student() {}

    void input()
    {
        cin >> name >> cls >> section >> id >> math_marks >> eng_marks;
    }

    int total()
    {
        return math_marks + eng_marks;
    }

    void print()
    {
        cout << name << " " << cls << " " << section << " " << id << " "
             << math_marks << " " << eng_marks << endl;
    }
};

bool compare(Student a, Student b)
{
    if (a.total() != b.total())
        return a.total() > b.total();
    return a.id < b.id;
}

int main()
{
    int N;
    cin >> N;
    Student students[100];

    for (int i = 0; i < N; i++)
        students[i].input();

    sort(students, students + N, compare);

    for (int i = 0; i < N; i++)
        students[i].print();

    return 0;
}

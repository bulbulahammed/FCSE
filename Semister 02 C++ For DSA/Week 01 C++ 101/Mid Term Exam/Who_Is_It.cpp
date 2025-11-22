#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int ID;
    string Name;
    char Section;
    int TotalMarks;
};
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        Student S1, S2, S3;
        cin >> S1.ID >> S1.Name >> S1.Section >> S1.TotalMarks;
        cin >> S2.ID >> S2.Name >> S2.Section >> S2.TotalMarks;
        cin >> S3.ID >> S3.Name >> S3.Section >> S3.TotalMarks;

        Student students[3] = {S1, S2, S3};
        Student TopScore = students[0];

        for (int j = 1; j < 3; j++)
        {
            if (students[j].TotalMarks > TopScore.TotalMarks)
            {
                TopScore = students[j];
            }
            else if (students[j].TotalMarks == TopScore.TotalMarks)
            {
                if (students[j].ID < TopScore.ID)
                {
                    TopScore = students[j];
                }
            }
        }
        cout << TopScore.ID << " " << TopScore.Name << " " << TopScore.Section << " " << TopScore.TotalMarks << endl;
    }
    return 0;
}
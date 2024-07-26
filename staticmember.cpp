#include <iostream>
using namespace std;
class student
{
public:
    static int rollno;
    char name[20];
    int j = 0;
    int maths, sci, eng;
    int total;
    int per;

    student()
    {
        rollno++;
    }
    void takedata()
    {
        cout << "name:";
        cin >> name;
        cout << "maths:";
        cin >> maths;
        cout << "sci:";
        cin >> sci;
        cout << "eng:";
        cin >> eng;
        total = maths + sci + eng;
        cout << "total:" << total << endl;
        per = total * 100 / 300;
        cout << "percentage:" << per << endl;
        cout << "student" << rollno << endl;
    }
    void showdata()
    {

        cout << "name:" << name << endl;
        cout << "maths:" << maths << endl;
        cout << "sci:" << sci << endl;
        cout << "eng:" << eng << endl;
        cout << "total:" << total << endl;
        cout << "percentage:" << per << endl;
    }
};
int student::rollno = 0;
int main()
{

    student s1;
    cout << "Number of students:" << s1.rollno << endl;
    s1.takedata();
    s1.showdata();
    student s2;
    cout << "Number of students:" << s2.rollno << endl;
    s2.takedata();
    s2.showdata();
    student s3;
    cout << "Number of students:" << s1.rollno << endl;
    s3.takedata();
    s3.showdata();

    return 0;
}
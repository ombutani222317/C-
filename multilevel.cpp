#include <iostream>
using namespace std;

class student
{
protected:
    int adno;
    float total;
    char aname[50];
    int maths, sci, eng;

public:
    float ctotal()
    {
        total = maths + sci + eng;
        return total;
    }
};

class takedata : public student
{
public:
    void take()
    {
        cout << "enter the admission number:" << endl;
        cin >> adno;
        cout << "enter the student name:" << endl;
        cin >> aname;
        cout << "enter the maths subject marks:" << endl;
        cin >> maths;
        cout << "enter the sci subject marks:" << endl;
        cin >> sci;
        cout << "enter the eng subject marks:" << endl;
        cin >> eng;
    }
    void Showdata()
    {
        cout << "adno:" << adno << endl;
        cout << "name:" << aname << endl;
        cout << "maths marks:" << maths << endl;
        cout << "science marks:" << sci << endl;
        cout << "english marks:" << eng << endl;
    }
};

class calculate : public takedata
{

public:
    void total()
    {
        cout << "total marks " << ctotal();
    }
};

int main()
{
    calculate obj;
    obj.take();
    obj.Showdata();
    obj.ctotal();
    obj.total();
}
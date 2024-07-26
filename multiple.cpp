#include <iostream>
using namespace std;

class student
{
protected:
    int adno;
    char aname[50];
    int total;
    int maths, sci, eng;

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

class takedata
{
public:
   int total;
    int ctotal(int maths ,int sci,int eng)
    {
        total = maths + sci + eng;
        return total;
    }
};



class calculate : public takedata, public student
{

public:
    void total()
    {
        cout << "total marks :" << ctotal(maths,sci,eng)<<endl;
    }
};

int main()
{
    calculate obj;
    obj.take();
    obj.Showdata();

    obj.total();
}
#include <iostream>
using namespace std;
class student
{
private:
    int adno;
    float total;
    char aname[50];
    int maths, sci, eng;

protected:
    float ctotal()
    {
        total = maths + sci + eng;
        return total;
    }

public:
    void takedata()
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
        cout << "total marks" << ctotal() << endl;
    }
};

class mark : public student
{

public:
    void total()
    {
        cout << "total marks " << ctotal();
    }
};

int main()
{
    mark obj;
    obj.takedata();
    obj.Showdata();
    obj.total();

    return 0;
}
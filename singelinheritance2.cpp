#include <iostream>
using namespace std;
class batesman
{
private:
    int bcode;
    char bname[50];
    float batavg;
    int innings, notout, runs;

protected:
    float calcavg()
    {
        batavg = runs / (innings - notout);

        return batavg;
    }

public:
    void takedata()
    {
        cout << "enter the batesman number:" << endl;
        cin >> bcode;
        cout << "enter the batesman name:" << endl;
        cin >> bname;
        cout << "enter the innings :" << endl;
        cin >> innings;
        cout << "enter the notout :" << endl;
        cin >> notout;
        cout << "enter the runs :" << endl;
        cin >> runs;
    }
    void Showdata()
    {
        cout << "bcode:" << bcode << endl;
        cout << "name:" << bname << endl;
        cout << "innings:" << innings << endl;
        cout << "notout:" << notout << endl;
        cout << "runs:" << runs << endl;
        cout << "batavg" << calcavg() << endl;
    }
};

class mark : public batesman
{

public:
    void bname()
    {
        cout << "bname " << calcavg();
    }
};

int main()
{
    mark obj;
    obj.takedata();
    obj.bname();
    obj.Showdata();

    return 0;
}
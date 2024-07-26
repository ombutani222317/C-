
#include <iostream>
using namespace std;
class batesmen
{
    int bcode;
    char bname[20];
    int innings, notout, runs;
    int batavg;
    int calcavg();

public:
    void readdata()
    {
        cout << "Enter bcode:";
        cin >> bcode;
        cout << "Enter bname:";
        cin >> bname;
        cout << "Enter a player innings:";
        cin >> innings;
        cout << "Enter players notout:";
        cin >> notout;
        cout << "Enter player runs:";
        cin >> runs;
    }
    void Showdata()
    {
        cout << "bcode:" << bcode << endl;
        cout << "bname:" << bname << endl;
        cout << "innegs:" << innings << endl;
        cout << "notouts:" << notout << endl;
        cout << "runs:" << runs << endl;
        cout << "batavg:" << calcavg();
    }
};
int batesmen::calcavg()
{
    batavg = runs / (innings - notout);
    return batavg;
}

int main()
{
    class batesmen obj;
    obj.readdata();
    obj.Showdata();
    return 0;
}
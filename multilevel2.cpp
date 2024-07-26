#include <iostream>
using namespace std;

class flight
{
protected:
    int fno;
    char destination[20];
    int distance;
    int fuel;

public:
    void calfuel()
    {
        if (distance <= 1000)
        {
            fuel = 500;
        }
        else if (distance > 1000 && distance <= 2000)
        {
            fuel = 1100;
        }
        else
        {
            fuel = 2200;
        }
    }
};
class desfuel: public flight
{
public:
   void take()
    {
        std::cout << "enter the flight number:";
        cin >> fno;
        cout << "enter the destination :";
        cin >> destination;
        cout<<"enter the distance:";
        cin>>distance;

    }
    void Showdata()
    {
        cout << "adno:" << fno << endl;
        cout << "name:" << destination << endl;
        cout<<"distance:"<<distance<<endl;
        
    }
};
int main()
{
    desfuel obj;
    obj.calfuel();  
    obj.take();
    obj.Showdata();
    return 0;
}
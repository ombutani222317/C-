#include <iostream>
using namespace std;

class volumm
{
public:
    volumm(int a)
    {
        cout << "default constructor is call" << endl;
    }
    volumm()
    {
        cout << " distructor is call" << endl;
    }
    volumm(int a)
    {
        cout << "para constructor is call" << endl;
    }
    volumm(char b)
    {
        cout << "para constructor is call" << endl;
    }
};
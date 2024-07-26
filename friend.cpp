#include <iostream>
using namespace std;
class large
{

    int a;
    int b;
    friend large add(large);

public:
    void setdata(int p, int q)
    {
        a = p;
        b = q;
    }
};

large add(large x)
{
    if (x.a > x.b)
    {
        cout << "A is larger" << endl;
    }
    else
    {
        cout << "B is larger";
    }
}
int main()
{
    large s;
    s.setdata(10,20);
add(s);

    return 0;
}
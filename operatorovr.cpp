#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "value is a:" << a << endl;
        cout << "value is b:" << b << endl;
    }
    complex operator%(complex x)
    {
        complex y;
        y.a = a % x.a;
        y.b = b % x.b;

        return y;
    }
};
int main()
{
    complex s1, s2, s3;
    s1 = complex(10, 5);
    s2 = complex(5, 2);
    cout << "first object" << endl;
    s1.display();
    cout << "second object" << endl;
    s2.display();
    cout << "final output" << endl;
    s3 = s1 % s2;
    s3.display();
    return 0;
}
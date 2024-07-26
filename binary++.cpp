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
    complex operator++(int)
    {
        complex y;
        y.a = ++a;
        y.b = ++b;

        return y;
    }
};
int main()
{
    complex s1, s3;
    s1 = complex(10, 5);
 
    cout << "first object" << endl;
    s1.display();

    cout << "final output" << endl;
    s3 = s1++;
    s3.display();
    return 0;
}
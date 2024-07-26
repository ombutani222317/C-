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
        cout << "value a is: " << a << endl;
        cout << "value b is: " << b << endl;
    }

    void operator+()
    {
        a = a;
        b = b;
    }
};
int main()
{
    complex s1(10, -23);
    cout << "Final output" << endl;
    +s1;
    s1.display();

    return 0;
}
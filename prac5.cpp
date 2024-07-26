#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Enter the number A:";
    cin >> a;
    cout << "Enter the number B:";
    cin >> b;
    cout << "Enter the number C:";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "A is big";
    }
    else if (b > a && b > c)
    {
        cout << "B is big";
    }
    else
    {
        cout << "C is big";
    }

    return 0;
}
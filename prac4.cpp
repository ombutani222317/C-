#include <iostream>
using namespace std;

int main()
{
    float pi = 3.14;
    float radius, area;
    cout << "Enter the radius:";
    cin >> radius;
    area = pi * radius * radius;
    cout << "area of circle:" << area;

    return 0;
}
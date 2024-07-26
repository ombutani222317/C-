#include <iostream>
using namespace std;
class area
{
public:
    area(int circle)
    {
        float pi = 3.14;
        float radius, area;

        cout << " Input the radius of a circle : ";
        cin >> radius;
        area = pi * radius * radius;

        cout << " The area of a circle is : " << area << endl;
        cout << endl;
    }
    area(float square, int a)
    {

        float side, area;

        cout << " Input the side of a square : ";
        cin >> side;
        area = side * side;

        cout << " The area of a square is : " << area << endl;
        cout << endl;
    }
    area(int rec, int b)
    {

        int width, height, area;

        cout << " Input the width of a rectangle : ";
        cin >> width;
        cout << " Input the height of a rectangle : ";
        cin >> height;
        area = width * height;

        cout << " The area of a rectangle is : " << area << endl;
        cout << endl;
    }
     area(char triangle)
    {

        int base, height, area;

        cout << " Input the base of a triangle : ";
        cin >> base;
        cout << " Input the height of a triangle : ";
        cin >> height;
        area =  height*base/2;

        cout << " The area of a triangle is : " << area << endl;
        cout << endl;
    }
};

int main()
{
    area obj('a');  
    return 0;
}
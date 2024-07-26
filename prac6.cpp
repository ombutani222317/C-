#include <iostream>
using namespace std;

int main()
{
    int input;
    int hr, min, sec;
    cout << "Enter the second:";
    cin >> input;
    hr = input / 3600;
    min = (input - hr * 3600) / 60;
    sec = input - (hr * 3600 + min * 60);
    cout << "total hour:" << hr << endl;
    cout << "total min:" << min << endl;
    cout << "Time:" << hr << "-" << min << "-" << sec;
    return 0;
}
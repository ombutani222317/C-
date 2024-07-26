#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    int number[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element position:";
        cin >> number[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << number[i] << "\t";
    }
}